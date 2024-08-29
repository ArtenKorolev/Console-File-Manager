#include "Shell.h"


using namespace std;

void Shell::loop()
{
	string currentPath;
	ChangeDiskCommand().run(currentPath);

	CommandParser parser;
	string command;

	while (true)
	{
		cout << currentPath << " -> ";
		getline(cin, command);
		try {
			parser.parse(currentPath, command);
		}
		catch (BadInputExeption& exeption){
			cout << "\nBad input: " << exeption.what() << endl << endl;
		}
		catch (NotExistsExeption& exeption) {
			cout << "\nNot exists: " << exeption.what() << endl << endl;
		}
	}
}