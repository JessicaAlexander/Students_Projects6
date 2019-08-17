#include "pch.h"
#include<iostream>
#include <iomanip>
#include<string>
#include<fstream>
#include<iomanip>
#include "bookType.h"
using namespace std;

void List(bookType numBooks[], int count);
void SaveAll(bookType numBooks[], int count, ofstream &outData);
void getFileData(int& count, ifstream &inData, bookType books[]);

int main()
	{
	string Title;
	string Author;
	string ISBN;
	string Publisher;
	string PublishYear;
	double cost;
	double price;
	int copies;
	int NoAuthors;
	int authCount;
	char choice;
	int count;

	bookType numBooks[100];
	ifstream inData;
	ofstream outData;
	
	count = 5;
	inData.open("Books.txt");
	numBooks[0].setTitle("C++ Programing: From Problem Analysis to Program Design");
	numBooks[0].setISBN("5-17-525281-3");
	numBooks[0].setPublisher("ABC");
	numBooks[0].setPublishYear("2000");
	numBooks[0].setPrice(52.50);
	numBooks[0].setCopies(20);
	numBooks[0].setauthCount(1);
	numBooks[0].setAuthor("Malik, D.S.", 0);

	numBooks[1].setTitle("Fuzzy Discrete Structures");
	numBooks[1].setISBN("3-7908-1335-4");
	numBooks[1].setPublisher("Physica-Verlag");
	numBooks[1].setPublishYear("2000");
	numBooks[1].setPrice(89.00);
	numBooks[1].setCopies(10);
	numBooks[1].setauthCount(2);
	numBooks[1].setAuthor("Malik, Davender", 0);
	numBooks[1].setAuthor("Mordeson, John", 1);

	numBooks[2].setTitle("Fuzzy Mathematic in Medicine");
	numBooks[2].setISBN("3-7908-1325-7");
	numBooks[2].setPublisher("Physica-Verlag");
	numBooks[2].setPublishYear("2000");
	numBooks[2].setPrice(89.00);
	numBooks[2].setCopies(10);
	numBooks[2].setauthCount(3);
	numBooks[2].setAuthor("Cheng, Shih-Chung", 0);
	numBooks[2].setAuthor("Malik, Davender", 1);
	numBooks[2].setAuthor("Mordeson, John", 2);

	numBooks[3].setTitle("Harry John and The Magician");
	numBooks[3].setISBN("0-239-23635-0");
	numBooks[3].setPublisher("McArthur A. Devine Books");
	numBooks[3].setPublishYear("1999");
	numBooks[3].setPrice(19.95);
	numBooks[3].setCopies(10);
	numBooks[3].setauthCount(3);
	numBooks[3].setAuthor("Goof, Goofy", 0);
	numBooks[3].setAuthor("Pluto, Peter", 1);
	numBooks[3].setAuthor("Head, Mark", 2);

	numBooks[4].setTitle("Dynamic InterWeb Programming");
	numBooks[4].setISBN("22-99521-453-1");
	numBooks[4].setPublisher("GNet");
	numBooks[4].setPublishYear("1998");
	numBooks[4].setPrice(39.99);
	numBooks[4].setCopies(25);
	numBooks[4].setauthCount(1);
	numBooks[4].setAuthor("Smith, John", 0);

	if (inData)
	{
		cout << "File Successfully Opened!\n\n";
		getFileData(count, inData, numBooks);
		//inData >> Title >> Author >> ISBN >> Publisher >> PublishYear >> price >> copies;
	

	do
	{
		cout << "\n\tSearch for a book by its title: T";
		cout << "\n\tSearch for a book by its ISBN : I";
		cout << "\n\tUpdate the number of copies   : U";
		cout << "\n\tUpdate the price of book      : P";
		cout << "\n\tList Of books                 : L";
		cout << "\n\tAdd the books                 : A";
		cout << "\n\tSave                          : S";
		cout << "\n\tExit                          : E";
		cout << "\n\n\tEnter your choice           : ";
		cin >> choice;
		cin.ignore(100, '\n');
		int i;
		char T, I, U, E;
		switch (toupper(choice))
		{

		case 'T': cout << "\n\tEnter title to search : ";
			getline(cin, Title);
			for (i = 0; i <= count; i++)
				if (numBooks[i].compareTitle(Title))
					break;

			if (i == count)
			{
				cout << "\n\tBook not found.";
			}
			else
				cout << "\n\tBook found.";
			cout << "\n";
			break;

		case 'I':cout << "\n\tEnter ISBN to search : ";
			cin >> ISBN;

			for (i = 0; i < count; i++)
				if (numBooks[i].compareISBN(ISBN))
					break;

			if (i == count)
				cout << "\n\tBook not found.";
			else
				cout << "\n\tBook found.";
			cout << "\n";
			break;

		case 'U':    cout << "\n\tEnter title to search : ";
			getline(cin, Title);
			
			for (i = 0; i < count; i++)
			{
				if (numBooks[i].compareTitle(Title))
					break;
			}
			if (i == count)
				cout << "\n\tBook not found.";
			else
			{
				cout << "\n\tEnter the copies: ";
				cin >> copies;
				numBooks[i].updateCopies(copies);
				cout << "\n";
			} break;

		case 'P':    cout << "\n\tEnter title to search : ";
			getline(cin, Title);

			for (i = 0; i < count; i++)
				if (numBooks[i].compareTitle(Title))
					break;

			if (i == count)
				cout << "\n\tBook not found.";
			else
			{
				cout << "\n\tEnter the price: ";
				cin >> price;
				numBooks[i].updatePrice(price);
				cout << "\n";
			} break;

			case 'L':
				List(numBooks, count);
				break;

			case 'S':
				outData.open("Books.txt");
				SaveAll(numBooks, count, outData);
				outData.close();
				break;

		case 'A':
			do
			{
				cout << "\n\n\tEnter Book Title: ";
				getline(cin, Title);
				numBooks[count].setTitle(Title);

				cout << "\tEnter ISBN Number : ";
				getline(cin, ISBN);
				numBooks[count].setISBN(ISBN);

				cout << "\tEnter Publisher : ";
				getline(cin, Publisher);
				numBooks[count].setPublisher(Publisher);

				cout << "\tEnter Publish Year : ";
				cin >> PublishYear;
				numBooks[count].setPublishYear(PublishYear);

				cout << "\n\tEnter Price : ";
				cin >> cost;
				numBooks[count].setPrice(cost);

				cout << "\tEnter Number of Copies : ";
				cin >> copies;
				numBooks[count].setCopies(copies);
				//count++;

				cout << "\tEnter Number of Authors : ";
				cin >> NoAuthors;
				numBooks[count].setauthCount(NoAuthors);
				//count++;

				int j = 0;

				cin.ignore(1, '\n');
				for(int k = 0; k < NoAuthors; ++k)
				{
					cout << "\tEnter Author Name : ";
					getline(cin, Author);
					numBooks[count].setAuthor(Author, k);				
				} 
				count++;
				cout << "\n\tEnter more books (Y/N) ? ";
				cin >> choice;

			} while (choice != 'n' && choice != 'N');
			break;

		case 'E':
			return 0;
		}
	} while (choice != 'E' && choice != 'e');

	}
	else
	{
	cout << "File Not Found!\n\n";
	}
	inData.close();
	return 0;
}

void getFileData(int& count, ifstream &inData, bookType books[])
{
	string Title, Author, ISBN, Publisher, PublishYear;
	int NoAuthors, copies;
	double price;
	string authors[4];

	inData >> count;
	

	inData.ignore(1, '\n');
	
	for (int i = 0; i < count; ++i)
	{
		getline(inData, Title);
		books[i].setTitle(Title);
		getline(inData, ISBN);
		books[i].setISBN(ISBN);
		getline(inData, Publisher);
		books[i].setPublisher(Publisher);
		getline(inData, PublishYear);
		books[i].setPublishYear(PublishYear);
		inData >> price;
		books[i].setPrice(price);
		inData >> copies;
		books[i].setCopies(copies);
		inData >> NoAuthors;
		inData.ignore(1, '\n');
		books[i].setauthCount(NoAuthors);
		for (int j = 0; j < NoAuthors; ++j)
		{
			getline(inData, Author);
			authors[j] = Author;
		}
		books[i].setNoAuthors(authors, NoAuthors);
		inData.ignore(1, '\n');
	}
}

void List(bookType numBooks[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << numBooks[i].getTitle() << endl;
		cout << numBooks[i].getISBN() << endl;
		cout << numBooks[i].getPublisher() << endl;
		cout << numBooks[i].getPublishYear() << endl;
		cout << numBooks[i].getPrice() << endl;
		cout << numBooks[i].getCopies() << endl;
		cout << numBooks[i].getauthCount() << endl;
		for (int j = 0; j < numBooks[i].getauthCount(); j++)
		{
			cout << numBooks[i].getAuthors(j) << endl;
		}
		cout << endl;
	}
}
void SaveAll(bookType numBooks[], int count, ofstream &outData)
{
	outData << count << endl;
	for (int i = 0; i < count; i++)
	{
		outData << numBooks[i].getTitle() << endl;
		outData << numBooks[i].getISBN() << endl;
		outData << numBooks[i].getPublisher() << endl;
		outData << numBooks[i].getPublishYear() << endl;
		outData << numBooks[i].getPrice() << endl;
		outData << numBooks[i].getCopies() << endl;
		outData << numBooks[i].getauthCount() << endl;
		for (int j = 0; j < numBooks[i].getauthCount(); j++)
		{
			outData << numBooks[i].getAuthors(j) << endl;
		}
		outData << endl;
	}
}