#pragma once
#include <string>
#include "FileSystemEntity.h"

class DirEntity : public FileSystemEntity 
{
public:
	DirEntity(std::string name, std::string path);
};
