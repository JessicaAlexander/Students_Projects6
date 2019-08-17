#include "pch.h"
#include "invalidSec.h"

invalidSec::invalidSec()
{
	message = "Invalid second. The value of seconds must be between 0 and 59.";
}

void invalidSec::showException()
{
	cout << message << endl;
}