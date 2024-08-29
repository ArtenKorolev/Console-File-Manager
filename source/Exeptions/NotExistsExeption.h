#pragma once
#include "BaseExeption.h"

class NotExistsExeption : public BaseExeption
{
public:
	NotExistsExeption(std::string message);
};

