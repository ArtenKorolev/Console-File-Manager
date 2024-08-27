#include <vector>
#include <string>
#include <fstream>
#include "FileWriter.h"

FileWriter::FileWriter(FileEntity &file) : file(file)
{
}

void FileWriter::writeContentToFile(std::vector<std::string> content, std::ofstream &out)
{
	if (out.is_open())
	{
		for (auto &i : content)
		{
			out << i << std::endl;
		}
	}
}

void FileWriter::write(std::vector<std::string> content)
{
	std::ofstream out(file.getFullFilePath(), std::ios::app);
	writeContentToFile(content, out);
	out.close();
}

void FileWriter::reWrite(std::vector<std::string> content)
{
	std::ofstream out(file.getFullFilePath());
	writeContentToFile(content, out);
	out.close();
}
