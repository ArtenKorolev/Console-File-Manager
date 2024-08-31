#pragma once
#include <string>
#include <vector>
#include <windows.h>
#include <iostream>
#include "common_functions.h"
#include "File.h"
#include "Directory.h"
#include "FileEntity.h"
#include "DirEntity.h"
#include "FileSystemObject.h"
#include "BadInputException.h"
#include "BaseException.h"
#include "Commands.h"

class CommandParser
{
private:
    void parseCommand(std::string command, std::string &name, std::string &value);
    void mapResult(std::string &path, std::string name, std::string value);
    void throwUnknownCommandExeption(void);

public:
    void parse(std::string &currentPath, std::string command);
};