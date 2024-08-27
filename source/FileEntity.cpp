#include "FileEntity.h"

std::string FileEntity::getFullFilePath()
{
    if (endsWith(path, '\\'))
    {
        return path + name;
    }
    return path + '\\' + name;
}
