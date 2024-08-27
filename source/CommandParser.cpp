#include "CommandParser.h"
#include "Commands.cpp"

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
        DirEntity dir("", currentPath);
        ScanDirCommand command;
        command.run(dir);
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
        CreateFileCommand command;
        command.run(file);
    }
    else if (commandName == "rm"){
        RemoveFileCommand command;
        command.run(file);
    }
    else if (commandName == "rd"){
        ReadFileCommand command;
        command.run(file);
    }
    else if (commandName == "wrt"){
        WriteFileCommand command;
        command.run(file);
    } 
    else if (commandName == "mkdir"){
        DirEntity dir(commandValue, currentPath);
        CreateDirCommand command;
        command.run(dir);
    }
}