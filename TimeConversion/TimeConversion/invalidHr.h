#pragma once
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class invalidHr
{
public:
	invalidHr();
	void showException();
private:
	string message;
};