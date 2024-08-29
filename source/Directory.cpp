#include "Directory.h"

using namespace std;

Directory::Directory(DirEntity &dir) : dir(dir) 
{
    if (!this->isDir() && this->exists()) {
        throw BadInputExeption("This is not a directory");
    }
}

void Directory::create(void)
{
    filesystem::create_directory(this->dir.getFullPath());
}

vector<string> Directory::scan(void)
{
    if (!this->exists()) {
        throw NotExistsExeption("Directory does not exists");
    }

    vector<string> objectsInDir;
    for (const auto &object : filesystem::directory_iterator(this->dir.getFullPath())){
        objectsInDir.push_back(object.path().filename().string());
    }
    
    return objectsInDir;
}

bool Directory::exists(void)
{
    return filesystem::exists(this->dir.getFullPath());
}

void Directory::remove(void)
{
    if (!this->exists()) {
        throw NotExistsExeption("Directory does not exists");
    }
    filesystem::remove_all(this->getPath());
}

bool Directory::isDir(void)
{
    return filesystem::is_directory(this->dir.getFullPath());
}

string Directory::getPath() {
    return this->dir.getFullPath();
}
