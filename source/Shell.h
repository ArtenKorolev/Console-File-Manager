#pragma once
#include <iostream>
#include <string>
#include "CommandParser.h"
#include "BadInputExeption.h"
#include "NotExistsExeption.h"
#include "DisallowedSymbolsInNameExeption.h"

class Shell
{
public:
	void loop();
};
