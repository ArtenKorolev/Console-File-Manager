#pragma once
#include <iostream>
#include "DirEntity.h"
#include "FileEntity.h"
#include "File.h"
#include "Directory.h"

class Command
{
public:
	virtual void run() = 0;
};

class CommandWithFile
{
public:
	virtual void run(FileEntity &entity) = 0;
};

class CommandWithDir
{
public:
	virtual void run(DirEntity& entity) = 0;
};
