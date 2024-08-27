#include "Directory.h"

using namespace std;
using namespace std::filesystem;

Directory::Directory(DirEntity &dir) : dir(dir) {}

void Directory::create(void)
{
    create_directory(this->dir.getFullPath());
}

vector<string> Directory::scan(void)
{
    vector<string> objectsInDir;
    for (const auto &object : directory_iterator(this->dir.getFullPath()))
    {
        objectsInDir.push_back(object.path().filename().string());
    }
    
    return objectsInDir;
}

bool Directory::dirExists(void)
{
    return exists(this->dir.getFullPath());
}

bool Directory::isDir(void)
{
    return is_directory(this->dir.getFullPath());
}
