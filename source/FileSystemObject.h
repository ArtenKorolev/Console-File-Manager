#pragma once
#include "FileSystemEntity.h"
#include <vector>
#include <string>

class FileSystemObject
{
private:
	FileSystemEntity entity;
	std::vector<std::string> disallowedSymbols;

public:
	FileSystemObject(FileSystemEntity entity);
	virtual void create(void) = 0;
	virtual bool exists(void) = 0;
	virtual void remove(void) = 0;
	virtual std::string getPath(void) = 0;
};

