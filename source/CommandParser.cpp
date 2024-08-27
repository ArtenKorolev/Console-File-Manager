#include "CommandParser.h"

using namespace std;

void CommandParser::changeDir(string &currentPath, string toChange)
{
    string pathToChange = currentPath;

    if (endsWith(currentPath, '\\')){
        pathToChange += toChange;
    }
    else{
        pathToChange += '\\' + toChange;
    }

    DirEntity dirEnt(toChange, currentPath);
    Directory dir(dirEnt);

    if (dir.dirExists() && dir.isDir()){
        currentPath = pathToChange;
    }
}

void CommandParser::createFile(FileEntity& entity)
{
    File file(entity);
    file.save();
}

void CommandParser::removeFile(FileEntity& entity)
{
    File file(entity);
    if (file.isFile()) {
        file.del();
    }
}

void CommandParser::readFile(FileEntity& entity)
{
    File file(entity);
    vector<string> fileContent = file.read();

    cout << (file.isSaved() ? "" : "*");
    cout << entity.getFullPath() << ':' << endl;

    for (auto &i : fileContent){
        cout << i << endl;
    }
}

void CommandParser::writeFile(FileEntity& entity)
{;
    File file(entity);

    vector<string> content;
    string line;

    cout << "Start typing! Type \"$end\" to stop file's record\n:\n";
    while (true)
    {
        getline(cin, line);
        if (line == "$end"){
            break;
        }
        content.push_back(line);
    }

    for (auto &i : content){
        file.wirteBack(i);
    }

    string ans;
    cout << "Save this file's changes?[y/n]\n";
    getline(cin, ans);

    if (ans == "y"){
        file.save();
    }
}

void CommandParser::createDir(DirEntity &entity)
{
    Directory dir(entity);
    dir.create();
}

void CommandParser::scanDir(std::string path)
{
    DirEntity dirEnt{"", path};
    Directory dir(dirEnt);
    for (auto &i : dir.scan()){
        cout << i << endl;
    }
}

void CommandParser::parse(string &currentPath, string command)
{
    vector<string> commandContent = separate(command);
    int commandContentSize = commandContent.size();

    if (commandContentSize < 1){
        return;
    }

    string commandName = commandContent[0];

    if (commandName == "clr")
    {
        system("cls");
        return;
    }

    else if (commandName == "ext")
    {
        cout << "Bye\n";
        Sleep(1000);
        exit(0);
    }

    else if (commandName == "show"){
        this->scanDir(currentPath);
    }

    if (commandContentSize < 2) {
        return;
    }

    string commandValue = commandContent[1];
    FileEntity file(commandValue, currentPath);

    if (commandName == "cd"){
        this->changeDir(currentPath, commandValue);
    }
    else if (commandName == "crt"){
        this->createFile(file);
    }
    else if (commandName == "rm"){
        this->removeFile(file);
    }
    else if (commandName == "rd"){
        this->readFile(file);
    }
    else if (commandName == "wrt"){
        this->writeFile(file);
    }
    else if (commandName == "mkdir"){
        DirEntity dir(commandValue, currentPath);
        this->createDir(dir);
    }
}