#pragma once
#include <string>
#include <vector>
#include <windows.h>
#include <iostream>
#include "common_functions.h"
#include "File.h"
#include "FileEntity.h"
#include "Directory.h"
#include "FileSystemEntity.h"
#include "DirEntity.h"

class CommandParser
{
private:
    void changeDir(std::string &currentPath, std::string toChange);
    void createFile(FileEntity &entity);
    void removeFile(FileEntity& entity);
    void readFile(FileEntity& entity);
    void writeFile(FileEntity& entity);
    void createDir(DirEntity &entity);
    void scanDir(std::string path);

public:
    void parse(std::string &currentPath, std::string command);
};