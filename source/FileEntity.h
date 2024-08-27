#pragma once
#include <string>
#include "FileSystemEntity.h"

class FileEntity : public FileSystemEntity 
{
public:
	FileEntity(std::string name, std::string path);
};