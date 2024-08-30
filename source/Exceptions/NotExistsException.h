#pragma once
#include "BaseException.h"

class NotExistsException : public BaseException
{
public:
	NotExistsException(std::string message);
};
