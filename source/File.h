#pragma once
#include <string>
#include <vector>
#include <cstdio>
#include <filesystem>
#include "FileWriter.h"
#include "common_functions.h"
#include "FileReader.h"
#include "FileEntity.h"

using namespace std;

class File
{
private:
	FileEntity &fileEntity;
	vector<string> content;
	bool saved = false;

	void setNotSaved(void);
public:
	File(FileEntity &file);
	void wirteBack(string value);
	void removeBack(void);
	vector<string> read(void);
	void save(void);
	bool isSaved(void);
	void del(void);
	void clear(void);
	bool isFile(void);
};
