#pragma once
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class invalidSec
{
public:
	invalidSec();
	void showException();
private:
	string message;
};