#include "BaseExeption.h"

BaseExeption::BaseExeption(std::string message) : errorMessage(message) {}

std::string BaseExeption::what()
{
	return this->errorMessage;
}
