#include "Error.h"

Error::Error(string _errorMessage)
{
	errorMessage = _errorMessage;
}

string Error::getErrorMessage()
{
	return errorMessage;
}
