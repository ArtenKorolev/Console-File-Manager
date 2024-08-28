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
    bool validateCommand(std::string command, std::string &name, std::string &value);
    bool isFileCommand(std::string name);
    bool isDirCommand(std::string name);
    void mapFileCommand(std::string name, FileEntity& file);
    void mapDirCommand(std::string name, DirEntity& dir);
    void mapOneWordCommand(std::string name);
    std::vector<std::string> fileCommands{ "crt", "rd", "wrt", "rm" };
    std::vector<std::string> dirCommands{ "mkdir", "rmdir", "show" };

public:
    void parse(std::string &currentPath, std::string command);
};