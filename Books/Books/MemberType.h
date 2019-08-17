#pragma once
#include<string>
#include<iostream>
#include "dateType.h"
using namespace std;

class MemberType
{
private:
	string fName;
	string lName;
	int ID;
	string Address;
	string City;
	string State;
	string ZipCode;
	string PhoneNumber;
	int PurBooks;
	double AmountSpent;
	bool _member;
	dateType _expireDate;

public:
	MemberType();
	MemberType(int id, string fname, string lname, string _address, string city, string state, string zipCode, string phonenumber, bool member, int purchase, double amount);

	void setMemberInfo(int id, string fname, string lname, string _address, string city, string state, string zipCode, string phonenumber, bool member, int purchase, double amount);
	void setID(int);
	void setName(string, string);
	void setlName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZipCode(string);
	void setPhoneNumber(string);
	void setMember(bool);
	void setAmountSpent(double);
	void setPurBooks(int);
	void setExpirationDate(int, int, int);

	int getID();
	string getName();
	string getfName();
	string getlName();
	string getAddress();
	string getPhoneNumber();
	bool isMember();
	int getCountPurBooks() const;
	double getAmountSpent() const;
	int getExpirationMonth() const;
	int getExpirationDay() const;
	int getExpirationYear() const;

	void PurBook(double amount, int purchase);
	void resetbooksBoughtandAmount();
	void printMemberInfo() const;
	bool isExpired(dateType, dateType);
	~MemberType();
};
