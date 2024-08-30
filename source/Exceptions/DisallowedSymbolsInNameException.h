#pragma once
#include "BaseException.h"

class DisallowedSymbolsInNameException : public BaseException
{
public:
	DisallowedSymbolsInNameException(std::string message);
};

