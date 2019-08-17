#pragma once
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class invalidMin
{
public:
	invalidMin();
	void showException();
private:
	string message;
};