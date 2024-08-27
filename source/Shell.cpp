#include "Shell.h"

using namespace std;

void Shell::showDocs()
{
	cout << "cd <dir name> - enter to this dir\n"
		 << "clr - clear console\n"
		 << "crt <file name> - create file in current dir\n"
		 << "rm <file name> - delete file in current dir\n"
		 << "rd <file name> - read file\n"
		 << "wrt <file name> - write file\n"
		 << "<empty input> or help - open docs\n"
		 << "mkdir <directory name> - create dir\n"
		 << "show - read all objects in current dir\n"
		 << "ext - close manager\n"
		;
}

void Shell::loop()
{
	string currentPath;
	cout << "Choose disk to start (default - C):" << endl;
	getline(cin, currentPath);

	if (currentPath.size() > 1){
		currentPath = currentPath[0];
	}
	else if (currentPath.size() == 0){
		currentPath = "C";
	}

	currentPath += ":\\";

	string command;
	CommandParser parser;

	while (true)
	{
		cout << currentPath << " -> ";
		getline(cin, command);

		if (command == "" || command == "help")
		{
			this->showDocs();
			continue;
		}

		parser.parse(currentPath, command);
	}
}