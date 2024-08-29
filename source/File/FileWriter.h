#pragma once
#include <vector>
#include <string>
#include "FileEntity.h"

class FileWriter
{
private:
	FileEntity &file;
	void writeContentToFile(std::vector<std::string> content, std::ofstream &out);

public:
	FileWriter(FileEntity &file);
	void write(std::vector<std::string> content);
	void reWrite(std::vector<std::string> content);
};
