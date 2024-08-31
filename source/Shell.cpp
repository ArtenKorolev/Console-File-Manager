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
		catch (BadInputException& exception) {
			cout << "\nBad input: " << exception.what() << endl << endl;
		}
		catch (NotExistsException& exception) {
			cout << "\nNot exists: " << exception.what() << endl << endl;
		}
		catch (DisallowedSymbolsInNameException& exception) {
			cout << "\nBad symbol: " << exception.what() << endl << endl;
		}
		catch (exception& exception) {
			cout << "\nUnknown excpetion: \n" << exception.what() << ", please send" << endl << endl;
		}
	}
}