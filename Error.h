#pragma once
#include <iostream>
#include <string>

using namespace std;
class Error
{
private:
	string errorMessage;

public:
	Error(string _errorMessage);
	string getErrorMessage();
};

