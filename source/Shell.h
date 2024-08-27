#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include "common_functions.h"
#include "File.h"
#include "CommandParser.h"

class Shell
{
private:
	void showDocs(void);

public:
	void loop();
};
