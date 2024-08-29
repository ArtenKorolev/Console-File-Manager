#include "CommandParser.h"

using namespace std;

void CommandParser::parseCommand(string command, string &name, string &value)
{
    vector<string> commandWords = separate(command);
    int wordsInCommand = commandWords.size();

    if (wordsInCommand == 0) {
        throw ::BadInputExeption{"Empty input"};
    }

    name = commandWords[0];
    if (wordsInCommand == 1){
        value = "";
    }
    else if (wordsInCommand == 2) {
        value = commandWords[1];
    }
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
    else if (name == "rmdir") {
        RemoveDirectoryCommand().run(dir);
    }
}

void CommandParser::mapOneWordCommand(string name, string &path)
{
    if (name == "ext") {
        ExitCommand().run();
    }
    else if (name == "clr") {
        ClearConsoleCommand().run();
    }
    else if (name == "chd") {
        ChangeDiskCommand().run(path);
    }
}

void CommandParser::parse(string &currentPath, string command)
{
    string cmdName;
    string cmdValue;

    this->parseCommand(command, cmdName, cmdValue);

    if (cmdName == "cd") {
        ChangeDirCommand().run(currentPath, cmdValue);
        return;
    }

    if (cmdValue.empty() && !this->isDirCommand(cmdName)) 
    {
        this->mapOneWordCommand(cmdName, currentPath);
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