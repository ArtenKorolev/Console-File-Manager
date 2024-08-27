#include "DirEntity.h"

std::string DirEntity::getFullDirPath()
{
    if (endsWith(path, '\\'))
    {
        return path + name;
    }
    return path + '\\' + name;
}