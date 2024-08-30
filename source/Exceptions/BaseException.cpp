#include "BaseException.h"

BaseException::BaseException(std::string message) : errorMessage(message) {}

std::string BaseException::what()
{
	return this->errorMessage;
}
