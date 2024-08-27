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

    DirEntity dirEnt{ toChange, currentPath };
    Directory dir(dirEnt);

    if (dir.dirExists()){
        currentPath = pathToChange;
    }
}

void CommandParser::createFile(string fileName, string filePath)
{
    FileEntity fileEnt{fileName, filePath};
    File file(fileEnt);
    file.save();
}

void CommandParser::removeFile(string fileName, string filePath)
{
    FileEntity fileEnt{fileName, filePath};
    File file(fileEnt);
    file.del();
}

void CommandParser::readFile(string fileName, string filePath)
{
    FileEntity fileEnt{fileName, filePath};
    File file(fileEnt);

    vector<string> fileContent = file.read();

    cout << (file.isSaved() ? "" : "*");
    cout << fileEnt.getFullFilePath() << ':' << endl;

    for (auto &i : fileContent){
        cout << i << endl;
    }
}

void CommandParser::writeFile(string fileName, string filePath)
{
    FileEntity fileEnt{fileName, filePath};
    File file(fileEnt);

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

void CommandParser::createDir(string name, string path)
{
    DirEntity dirEnt{name, path};
    Directory dir(dirEnt);
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

    if (commandContentSize >= 2)
    {
        string commandValue = commandContent[1];

        if (commandName == "cd"){
            this->changeDir(currentPath, commandValue);
        }
        else if (commandName == "crt"){
            this->createFile(commandValue, currentPath);
        }
        else if (commandName == "rm"){
            this->removeFile(commandValue, currentPath);
        }
        else if (commandName == "rd"){
            this->readFile(commandValue, currentPath);
        }
        else if (commandName == "wrt"){
            this->writeFile(commandValue, currentPath);
        }
        else if (commandName == "mkdir"){
            this->createDir(commandValue, currentPath);
        }
    }   
}