#pragma once
#include <string>
#include "common_functions.h"

struct FileEntity
{
	std::string name;
	std::string path;
	std::string getFullFilePath();
};