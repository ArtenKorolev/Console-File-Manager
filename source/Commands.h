#pragma once
#include <iostream>
#include <windows.h>
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

class CommandWithPath
{
public:
	virtual void run(std::string& path, std::string toChange) = 0;
};

class CreateFileCommand : public CommandWithFile 
{
public:
	void run(FileEntity& entity) override;
};

class RemoveFileCommand : public CommandWithFile
{
public:
	void run(FileEntity& entity) override;
};

class ReadFileCommand : public CommandWithFile
{
public:
	void run(FileEntity& entity) override;
};

class WriteFileCommand : public CommandWithFile
{
public:
	void run(FileEntity& entity) override;
};

class ScanDirCommand : public CommandWithDir
{
public:
	void run(DirEntity& entity) override;
};

class CreateDirCommand : public CommandWithDir
{
public:
	void run(DirEntity& entity) override;
};

class ExitCommand : public Command
{
public:
	void run() override;
};

class ClearConsoleCommand : public Command
{
public:
	void run() override;
};

class ShowDocsCommand : public Command
{
public:
	void run() override;
};

class ChangeDirCommand : public CommandWithPath
{
private:
	void goToDirecotryAbove(std::string& path);
public:
	void run(std::string& path, std::string toChange) override;
};

class ChangeDiskCommand : public CommandWithPath
{
public:
	void run(std::string& path, std::string toChange = "") override;
};

class RemoveDirectoryCommand : public CommandWithDir 
{
public:
	void run(DirEntity& entity) override;
};
