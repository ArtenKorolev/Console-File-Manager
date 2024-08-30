#pragma once
#include <iostream>
#include <string>
#include "CommandParser.h"
#include "BadInputException.h"
#include "NotExistsException.h"
#include "DisallowedSymbolsInNameException.h"

class Shell
{
public:
	void loop();
};
