#include "CommandParser.h"

using namespace std;

void CommandParser::parse(string &currentPath, string command)
{
    string name, value;
    this->parseCommand(command, name, value);
    this->mapResult(currentPath, name, value);
}

void CommandParser::parseCommand(string command, string &name, string &value)
{
    vector<string> commandWords = separate(command);
    int wordsInCommand = commandWords.size();

    if (wordsInCommand == 0) {
        throw BadInputException("Empty input");
    }

    name = commandWords[0];
    if (wordsInCommand == 1){
        value = "";
    }
    else if (wordsInCommand >= 2) 
    {
        value = commandWords[1];

        for (int i = 2; i < wordsInCommand;i++) {
            value += ' ' + commandWords[i];
        }
    }
}

void CommandParser::mapResult(string &path, string name, string value)
{
    if (value.empty())
    {
        if (name == "ext") {
            ExitCommand().run();
        }
        else if (name == "clr") {
            ClearConsoleCommand().run();
        }
        else if (name == "help") {
            ShowDocsCommand().run();
        }
        else if (name == "show") {
            DirEntity dir("", path);
            ScanDirCommand().run(dir);
        }
        else {
            this->throwUnknownCommandExeption();
        }
    }
    else 
    {
        FileEntity file(value, path);
        DirEntity dir(value, path);

        if (name == "cr") {
            CreateFileCommand().run(file);
        }
        else if (name == "rm") {
            RemoveFileCommand().run(file);
        }
        else if (name == "rd") {
            ReadFileCommand().run(file);
        }
        else if (name == "cln") {
            CleanFileCommand().run(file);
        }
        else if (name == "wrt") {
            WriteFileCommand().run(file);
        }
        else if (name == "crd") {
            CreateDirCommand().run(dir);
        }
        else if (name == "rmd") {
            RemoveDirectoryCommand().run(dir);
        }
        else if (name == "cd") {
            ChangeDirCommand().run(path, value);
        }
        else if (name == "chd") {
            ChangeDiskCommand().run(path, value);
        }
        else {
            this->throwUnknownCommandExeption();
        }
    }
}

void CommandParser::throwUnknownCommandExeption(void)
{
    throw BadInputException("Unknown command or bad args, type \"help\" to see documentation");
}
