#pragma once
#include <string>
#include "common_functions.h"

class FileSystemEntity
{
public:
	FileSystemEntity(std::string name, std::string path);
	std::string name;
	std::string path;
	std::string getFullPath(void);
};

