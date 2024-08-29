#pragma once
#include <vector>
#include <string>
#include "FileEntity.h"

class FileReader
{
private:
	FileEntity &file;

public:
	FileReader(FileEntity &file);
	std::vector<std::string> read();
};
