#pragma once
#include <string>
#include "BaseExeption.h"

class BadInputExeption : public BaseExeption
{
public:
	BadInputExeption(std::string message);
};
