#include "Shell.h"

using namespace std;

void Shell::loop()
{
	string currentPath;
	string command;
	cout << "Choose disk to start (default - C):\n";
	getline(cin, command);
	ChangeDiskCommand().run(currentPath, command);

	CommandParser parser;

	while (true)
	{
		cout << currentPath << " -> ";
		getline(cin, command);
		parser.parse(currentPath, command);
	}
}