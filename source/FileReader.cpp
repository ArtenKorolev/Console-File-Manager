#include <fstream>
#include <vector>
#include <string>
#include "FileReader.h"
#include "File.h"

std::vector<std::string> FileReader::read()
{
	std::vector<std::string> content;
	std::string line;

	std::ifstream in(file.getFullFilePath());

	if (in.is_open())
	{
		while (std::getline(in, line))
		{
			content.push_back(line);
		}
	}
	in.close();

	return content;
}

FileReader::FileReader(FileEntity &file) : file(file) {};
