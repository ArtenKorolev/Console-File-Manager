#include "FileSystemEntity.h"

FileSystemEntity::FileSystemEntity(std::string name, std::string path) : name(name), path(path) {}

std::string FileSystemEntity::getFullPath()
{
    if (endsWith(this->path, '\\')){
        return this->path + name;
    }
    return this->path + '\\' + name;
}
