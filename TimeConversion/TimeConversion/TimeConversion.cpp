// TimeConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "invalidSec.h"
#include "invalidHr.h"
#include "invalidMin.h"
using namespace std;

void MilitaryTime(int& hr, int& min, int& sec, string& med);

int main()
{
	int hr;
	int min;
	int sec;
	string medium;

	try
	{
		MilitaryTime(hr, min, sec, medium);

		if (medium == "AM" || medium == "am")
		{
			if (hr == 12)
				hr = hr - 12;
			cout << "\n The time in 24-hour notation, or military time is: " << hr << ":" << min << ":" << sec << endl;
		}
		else
		{
			hr = hr + 12;
			cout << "\n The time in 24-hour notation, or military time is: " << hr << ":" << min << ":" << sec << endl;
		}
	}
	catch (invalidHr ih)
	{
		ih.showException();
	}
	catch (invalidMin im)
	{
		im.showException();
	}
	catch (invalidSec is)
	{
		is.showException();
	}
	return 0;
}

void MilitaryTime(int& hr, int& min, int& sec, string& med)
{
	cout << "Enter the hour: ";
	cin >> hr;
	if (hr <= 0 || hr > 12)
		throw invalidHr();

	cout << "\nEnter the minutes: ";
	cin >> min;
	if (min > 60)
		throw invalidMin();

	cout << "\nEnter the seconds: ";
	cin >> sec;
	if (sec > 60)
		throw invalidSec();
	cout << "\nEnter AM or PM: ";
	cin >> med;
}

