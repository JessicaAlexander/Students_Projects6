#include "pch.h"
#include "invalidMin.h"


invalidMin::invalidMin()
{
	message = "Invalid minute. The value of minutes must be between 0 and 59.";
}

void invalidMin::showException()
{
	cout << message << endl;
}
