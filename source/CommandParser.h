#pragma once
#include <string>
#include <vector>
#include <windows.h>
#include <iostream>
#include "common_functions.h"
#include "File.h"
#include "FileEntity.h"
#include "Directory.h"
#include "DirEntity.h"
#include "FileSystemEntity.h"
#include "Commands.h"

class CommandParser
{
private:
    void changeDir(std::string &currentPath, std::string toChange);

public:
    void parse(std::string &currentPath, std::string command);
};