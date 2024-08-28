#pragma once
#include <string>

class BaseExeption
{
private:
	std::string errorMessage;

public:
	BaseExeption(std::string message);
	std::string what(void);
};

