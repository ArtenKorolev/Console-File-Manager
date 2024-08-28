#pragma once
#include <string>
#include <vector>
#include <filesystem>
#include "FileWriter.h"
#include "common_functions.h"
#include "FileReader.h"
#include "FileEntity.h"
#include "FileSystemObject.h"
#include "Exeptions\BadInputExeption.h"

using namespace std;

class File : public FileSystemObject
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
	void create(void) override;
	bool isSaved(void);
	void remove(void) override;
	bool exists(void) override;
	void clear(void);
	string getPath(void) override;
	bool isFile(void);
};
