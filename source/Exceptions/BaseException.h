#pragma once
#include <string>

class BaseException
{
private:
	std::string errorMessage;

public:
	BaseException(std::string message);
	std::string what(void);
};

