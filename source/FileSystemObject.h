#pragma once
#include "FileSystemEntity.h"
#include <vector>
#include <string>

class FileSystemObject
{
protected:
	std::vector<char> disallowedSymbols = {'\"', '\\', '/', '?', '*', '<', '>'};

public:
	virtual void create(void) = 0;
	virtual bool exists(void) = 0;
	virtual void remove(void) = 0;
	virtual std::string getPath(void) = 0;
};

