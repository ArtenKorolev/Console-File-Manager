#pragma once
#include <string>
#include "common_functions.h"
#include "FileSystemEntity.h"

class FileEntity : public FileSystemEntity 
{
public:
	FileEntity(std::string name, std::string path);
};