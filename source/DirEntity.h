#pragma once
#include <string>
#include "common_functions.h"

struct DirEntity
{
    std::string name;
    std::string path;
    std::string getFullDirPath();
};
