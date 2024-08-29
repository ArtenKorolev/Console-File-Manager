#include "Commands.h"
#include "BadInputExeption.h"

void CreateFileCommand::run(FileEntity& entity)
{
	File file(entity);
	file.create();
}

void RemoveFileCommand::run(FileEntity& entity)
{
	File file(entity);

	file.remove();
}

void ReadFileCommand::run(FileEntity& entity)
{
	File file(entity);
	vector<string> fileContent = file.read();

	cout << (file.isSaved() ? "" : "*");
	cout << entity.getFullPath() << ':' << endl;

	for (auto& i : fileContent) {
		cout << i << endl;
	}
}

void WriteFileCommand::run(FileEntity &entity)
{
	File file(entity);

	vector<string> content;
	string line;

	cout << "Start typing! Type \"$end\" to stop file's record\n:\n";
	while (true)
	{
		getline(cin, line);
		if (line == "$end") {
			break;
		}
		content.push_back(line);
	}

	for (auto& i : content) {
		file.wirteBack(i);
	}

	string ans;
	cout << "Save this file's changes?[y/n]\n";
	getline(cin, ans);

	if (ans == "y") {
		file.save();
	}
}

void ScanDirCommand::run(DirEntity& entity)
{
	Directory dir(entity);
	for (auto& i : dir.scan()) {
		cout << i << endl;
	}
}

void CreateDirCommand::run(DirEntity& entity)
{
	Directory dir(entity);
	dir.create();
}

void ExitCommand::run() 
{
	cout << "Bye\n";
	Sleep(1000);
	exit(0);
}

void ClearConsoleCommand::run()
{
	system("cls");
}

void ShowDocsCommand::run()
{
	cout << "\ncd <dir name> - enter to this dir\n"
		<< "clr - clear console\n"
		<< "crt <file name> - create file in current dir\n"
		<< "rm <file name> - delete file in current dir\n"
		<< "rd <file name> - read file\n"
		<< "wrt <file name> - write file\n"
		<< "<empty input> or help - open docs\n"
		<< "mkdir <directory name> - create dir\n"
		<< "rmdir <directory name> - delete dir\n"
		<< "show - read all objects in current dir\n"
		<< "chd - change disk\n"
		<< "cln <file name> - clear all file's content\n"
		<< "ext - close manager\n\n"
		;
	}

void ChangeDirCommand::goToDirecotryAbove(std::string& path)
{
	while (true)
	{
		path.pop_back();
		if (endsWith(path, '\\')){
			break;
		}
	}
}

void ChangeDirCommand::run(std::string& path, std::string toChange)
{
	string pathToChange = path;

	if (toChange == ".") {
		return;
	}

	if (toChange == "..")
	{
		goToDirecotryAbove(pathToChange);
		path = pathToChange;
		return;
	}

	if (endsWith(path, '\\')) pathToChange += toChange;
	else pathToChange += '\\' + toChange;

	DirEntity dirEnt(toChange, path);
	Directory dir(dirEnt);

	if (!dir.exists()){
		throw NotExistsExeption("Directory does not exists");
	}
	path = pathToChange;
}

void ChangeDiskCommand::run(std::string& path, std::string toChange)
{
	cout << "Choose disk (default - C)\n";
	getline(cin, toChange);

	if (toChange.size() > 1) {
		path = toChange[0];
	}
	else if (toChange.empty()) {
		path = "C";
	}
	else {
		path = toChange;
	}

	path += ":\\";
}

void RemoveDirectoryCommand::run(DirEntity& entity)
{
	Directory(entity).remove();
}

void CleanFileCommand::run(FileEntity& entity)
{
	File file(entity);
	file.clear();
	string choice;
	cout << "Do you really want clear all file?[y/n]\n";
	getline(cin, choice);
	if (choice == "y") {
		file.save();
	}
}
