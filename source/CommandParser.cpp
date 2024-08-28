#include "CommandParser.h"

using namespace std;

bool CommandParser::validateCommand(string command, string &name, string &value)
{
    vector<string> commandWords = separate(command);
    int wordsInCommand = commandWords.size();

    if (wordsInCommand == 0) {
        return false;
    }

    name = commandWords[0];
    if (wordsInCommand == 1){
        value = "";
    }
    else if (wordsInCommand == 2){
        value = commandWords[1];
    }

    return true;
}

bool CommandParser::isFileCommand(string name)
{
    return m_contains(this->fileCommands, name);
}

bool CommandParser::isDirCommand(string name)
{
    return m_contains(this->dirCommands, name);
}

void CommandParser::mapFileCommand(string name, FileEntity& file)
{
    if (name == "crt") {
        CreateFileCommand().run(file);
    }
    else if (name == "rd") {
        ReadFileCommand().run(file);
    }
    else if (name == "rm") {
        RemoveFileCommand().run(file);
    }
    else if (name == "wrt") {
        WriteFileCommand().run(file);
    }
}

void CommandParser::mapDirCommand(string name, DirEntity& dir)
{
    if (name == "mkdir") {
        CreateDirCommand().run(dir);
    }
    else if (name == "show") {
        ScanDirCommand().run(dir);
    }
}

void CommandParser::mapOneWordCommand(string name)
{
    if (name == "ext") {
        ExitCommand().run();
    }
    else if (name == "clr") {
        ClearConsoleCommand().run();
    }
}

void CommandParser::parse(string &currentPath, string command)
{
    string cmdName;
    string cmdValue;

    if (!this->validateCommand(command, cmdName, cmdValue)) {
        ShowDocsCommand().run();
        return;
    }

    if (cmdName == "cd") {
        ChangeDirCommand().run(currentPath, cmdValue);
        return;
    }

    if (cmdValue.empty() && !this->isDirCommand(cmdName)) 
    {
        this->mapOneWordCommand(cmdName);
        return;
    }

    if (this->isFileCommand(cmdName)) 
    {
        FileEntity file(cmdValue, currentPath);
        this->mapFileCommand(cmdName, file);
        return;
    }

    if (this->isDirCommand(cmdName)) 
    {
        DirEntity directory(cmdValue, currentPath);
        this->mapDirCommand(cmdName, directory);
    }
}