#include "pch.h"
#include "invalidHr.h"


invalidHr::invalidHr()
{
	message = "Invalid hour. The value of hours must be between 0 and 12.";
}

void invalidHr::showException()
{
	cout << message << endl;
}
