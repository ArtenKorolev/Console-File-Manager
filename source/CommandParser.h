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

class CommandParser
{
private:
    void changeDir(std::string &currentPath, std::string toChange);
    void createFile(std::string path, std::string name);
    void removeFile(std::string path, std::string name);
    void readFile(std::string path, std::string name);
    void writeFile(std::string path, std::string name);
    void createDir(std::string path, std::string name);
    void scanDir(std::string path);

public:
    void parse(std::string &currentPath, std::string command);
};