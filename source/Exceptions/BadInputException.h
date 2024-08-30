#pragma once
#include <string>
#include "BaseException.h"

class BadInputException : public BaseException
{
public:
	BadInputException(std::string message);
};
