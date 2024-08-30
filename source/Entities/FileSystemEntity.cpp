#include "FileSystemEntity.h"

FileSystemEntity::FileSystemEntity(std::string name, std::string path) : name(name), path(path) {}

std::string FileSystemEntity::getFullPath()
{
    if (endsWith(this->path, '\\')){
        return this->path + this->name;
    }
    return this->path + '\\' + this->name;
}
