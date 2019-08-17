// Books.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<iostream>
#include "bookType.h"
using namespace std;

bookType::bookType()
{
	title = "";
	for (int i = 0; i < 4; i++)
		authors[i] = "";
	publisher = "";
	ISBN = "";
	price = 0;
	copies = 0;
	authorsNo = 0;
	NoAuthors = 0;
}

void bookType::setTitle(string myTitle)
{
	title = myTitle;
}

string bookType::getTitle()
{
	return title;
}

bool bookType::compareTitle(string otherTitle)
{
	return (title.compare(otherTitle) == 0);
}

void bookType::setAuthor(string myAuthor, int i)
{
	
	if (myAuthor.compare("") == 0)
		return;
	else
	{

		authors[i] = myAuthor;
	}
}

void bookType::showAuthors()
{
	for (int i = 0; i < authorsNo; i++)
		cout << "\n\tAuthor: " << authors[i] << ", " << "\r\r";
}

//void bookType::updateAuthor(string myAuthor, int i)
//{
//	setAuthor(myAuthor, i);
//}

string bookType::getAuthors(int i)
{
	return authors[i];
}

void bookType::setauthCount(int myauthCount)
{
	authCount = myauthCount;
}

int bookType::getauthCount()
{
	return authCount;
}

void bookType::setNoAuthors(string auths[], int count)
{
	authCount = count;
	for (int i = 0; i < count; ++i)
	{
			authors[i] = auths[i];
	}
}

void bookType::showNoAuthors()
{
	cout << "\n\tNumber Authors: " << authCount;
}

void bookType::updateNoAuthors(int myNoAuthors)
{
	NoAuthors = myNoAuthors;
}


int bookType::getNoAuthors()
{
	return NoAuthors;
}

void bookType::setCopies(int myCopies)
{
	copies = myCopies;
}

void bookType::showCopies()
{
	cout << "\n\tNumber Copies: " << copies;
}

void bookType::updateCopies(int myCopies)
{
	copies = myCopies;
}

int bookType::getCopies()
{
	return copies;
}

void bookType::setPublisher(string myPublisher)
{
	publisher = myPublisher;
}

void bookType::showPublisher() 
{
	cout << "\n\tPublisher: " << publisher;
}

void bookType::updatePublisher(string myPublisher)
{
	publisher = myPublisher;
}

string bookType::getPublisher()
{
	return publisher;
}

void bookType::setPublishYear(string myPublishYear)
{
	PublishYear = myPublishYear;
}

void bookType::showPublishYear()
{
	cout << "\n\tPublish Year: " << PublishYear;
}

void bookType::updatePublishYear(string myPublishYear)
{
	PublishYear = myPublishYear;
}

string bookType::getPublishYear()
{
	return PublishYear;
}

void bookType::setISBN(string myISBN)
{
	ISBN = myISBN;
}

void bookType::showISBN()
{
	cout << "\n\tISBN: " << ISBN;
}

void bookType::updateISBN(string myISBN)
{
	ISBN = myISBN;
}

string bookType::getISBN()
{
	return ISBN;
}

bool bookType::compareISBN(string myISBN)
{
	return (myISBN.compare(ISBN) == 0);
}

void bookType::setPrice(double myPrice)
{
	price = myPrice;
}

void bookType::showPrice()
{
	cout << "\n\tPrice: " << price;
}

void bookType::updatePrice(double myPrice)
{
	price = myPrice;
}

double bookType::getPrice()
{
	return price;
}