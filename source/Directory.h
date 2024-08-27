#pragma once
#include <string>
#include <filesystem>
#include <vector>
#include "DirEntity.h"

class Directory
{
private:
    DirEntity &dir;

public:
    Directory(DirEntity &dir);
    void create(void);
    std::vector<std::string> scan(void);
    bool dirExists(void);
    bool isDir(void);
};