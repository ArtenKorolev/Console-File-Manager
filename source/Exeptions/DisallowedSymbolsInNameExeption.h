#pragma once
#include "BaseExeption.h"

class DisallowedSymbolsInNameExeption : public BaseExeption
{
public:
	DisallowedSymbolsInNameExeption(std::string message);
};

