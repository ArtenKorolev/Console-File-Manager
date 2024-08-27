#include "File.h"

void File::setNotSaved(void)
{
	this->saved = false;
}

void File::save(void)
{
	FileWriter writer(this->fileEntity);
	writer.reWrite(this->content);
	this->saved = true;
}

bool File::isSaved(void)
{
	return this->saved == true;
}

File::File(FileEntity &file) : fileEntity(file) 
{
	FileReader reader(this->fileEntity);
	this->content = reader.read();
	this->saved = true;
}

void File::wirteBack(string value)
{
	this->content.push_back(value);
	this->setNotSaved();
}

void File::removeBack(void)
{
	if (this->content.size() == 0) return;
	this->content.pop_back();
	this->setNotSaved();
}

vector<string> File::read(void)
{
    return this->content;
}

void File::del(void)
{
	std::filesystem::remove(this->fileEntity.getFullPath());
}

void File::clear(void)
{
	this->content.clear();
	this->setNotSaved();
}

bool File::isFile(void)
{
	return std::filesystem::is_regular_file(this->fileEntity.getFullPath());
}
