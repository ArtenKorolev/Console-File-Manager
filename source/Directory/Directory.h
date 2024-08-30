#pragma once
#include <string>
#include <filesystem>
#include <vector>
#include "DirEntity.h"
#include "FileSystemObject.h"
#include "BadInputException.h"
#include "NotExistsException.h"

class Directory : public FileSystemObject
{
private:
    DirEntity &dir;

public:
    Directory(DirEntity &dir);
    std::vector<std::string> scan(void);
    bool isDir(void);
    void create(void) override;
    bool exists(void) override;
    void remove(void) override;
    std::string getPath(void) override;
};