#include "Shell.h"

using namespace std;

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
		parser.parse(currentPath, command);
	}
}