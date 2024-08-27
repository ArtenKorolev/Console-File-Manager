#pragma once
#include <string>
#include "common_functions.h"
#include "FileSystemEntity.h"

class DirEntity : public FileSystemEntity 
{
public:
	DirEntity(std::string name, std::string path);
};
