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
		catch (BadInputException& exeption){
			cout << "\nBad input: " << exeption.what() << endl << endl;
		}
		catch (NotExistsException& exeption) {
			cout << "\nNot exists: " << exeption.what() << endl << endl;
		}
		catch (DisallowedSymbolsInNameException& exeption) {
			cout << "\nBad symbol: " << exeption.what() << endl << endl;
		}
	}
}