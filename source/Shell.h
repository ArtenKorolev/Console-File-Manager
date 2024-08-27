#pragma once
#include <iostream>
#include <string>
#include "CommandParser.h"

class Shell
{
private:
	void showDocs(void);

public:
	void loop();
};
