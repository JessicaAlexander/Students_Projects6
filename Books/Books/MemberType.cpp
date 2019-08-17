#include "pch.h"
#include "MemberType.h"
#include "pch.h"
#include<string>
#include<iostream>

using namespace std;

MemberType::MemberType()
{
	ID = 0;
	fName = " ";
	lName = " ";
	Address = " ";
	City = " ";
	State = " ";
	ZipCode = " ";
	PhoneNumber = " ";
	PurBooks = 0;
	AmountSpent = 0.0;
	_member = false;
}

MemberType::MemberType(int id, string fname, string lname, string _address, string city, string state, string zipCode, string phonenumber, bool member, int purchase, double amount)
{
	fName = fname;
	lName = lname;
	ID = id;
	Address = _address;
	City = city;
	State = state;
	ZipCode = zipCode;
	PurBooks = purchase;
	AmountSpent = amount;
	_member = member;
	_expireDate.setDate(01, 01, 1900);
}


void MemberType::setMemberInfo(int id, string fname, string lname, string _address, string city, string state, string zipCode, string phonenumber, bool member, int purchase, double amount)
{
	fName = fname;
	lName = lname;
	ID = id;
	Address = _address;
	City = city;
	State = state;
	ZipCode = zipCode;
	PhoneNumber = phonenumber;
	PurBooks = purchase;
	AmountSpent = amount;
	_member = member;
	_expireDate.setDate(01, 01, 1900);
}

void MemberType::setID(int id)
{
	ID = id;
}

void MemberType::setName(string fname, string lname)
{
		fName = fname;
		lName = lname;
}

void MemberType::setlName(string lname)
{
	lName = lname;
}

void MemberType::setAddress(string _address)
{
	Address = _address;
}

void MemberType::setCity(string city)
{
	City = city;
}

void MemberType::setState(string state)
{
	State = state;
}

void MemberType::setZipCode(string zipCode)
{
	ZipCode = zipCode;
}

void MemberType::setPhoneNumber(string phonenumber)
{
	PhoneNumber = phonenumber;
}

void MemberType::setMember(bool member)
{
	_member = member;
}

void MemberType::setAmountSpent(double amount)
{
	AmountSpent = amount;
}

void MemberType::setPurBooks(int purchase)
{
	PurBooks = purchase;
}

void MemberType::setExpirationDate(int m, int d, int y)
{
	_expireDate.setDate(m, d, y);
}

int MemberType::getID()
{
	return ID;
}

string MemberType::getName()
{
	string name;
	name = fName + " " + lName;
	return name;
}

string MemberType::getfName()
{
	return fName;
}

string MemberType::getlName()
{
	return lName;
}

string MemberType::getAddress()
{
	string address;
	address = Address + "\n" + City + "," + State + "," + ZipCode;
	return address;
}

string MemberType::getPhoneNumber()
{
	return PhoneNumber;
}

bool MemberType::isMember()
{
	return _member;
}

int MemberType::getCountPurBooks() const
{
	return PurBooks;
}

double MemberType::getAmountSpent() const
{
	return AmountSpent;
}

int MemberType::getExpirationMonth() const
{
	return _expireDate.getMonth();
}

int MemberType::getExpirationDay() const
{
	return _expireDate.getDay();
}

int MemberType::getExpirationYear() const
{
	return _expireDate.getYear();
}

void MemberType::PurBook(double amount, int count)
{
	PurBooks += count;
	AmountSpent += amount;
}

bool MemberType::isExpired(dateType memberDate, dateType todayDate)
{
	if (memberDate.getYear() < todayDate.getYear())
		return true;
	else if (memberDate.getYear() > todayDate.getYear())
		return false;
	else if (memberDate.getMonth() < todayDate.getMonth())
		return true;
	else if (memberDate.getMonth() > todayDate.getMonth())
		return false;
	else if (memberDate.getDay() < todayDate.getDay())
		return true;
	else
		return false;
}

void MemberType::resetbooksBoughtandAmount()
{
	PurBooks = 0;
	AmountSpent = 0;
}

void MemberType:: printMemberInfo() const
{
	cout << "Person's ID is: " << ID << endl;
	cout << "Person's Name is: " << fName << " " << lName << endl;
	cout << "Person's Address is: " << Address << "\n" << City << ", " << State << ", " << ZipCode << endl;
	cout << "Number of Books is: " << PurBooks << endl;
	cout << "Amount Spent is: " << AmountSpent << endl;
}

MemberType::~MemberType()
{
}
