#pragma once
#include<string>
using namespace std;

class bookType
{
public :
    bookType();
    void setTitle( string );
    string getTitle();
    bool compareTitle( string );

    void setAuthor( string a, int i);
    void showAuthors();
    //void updateAuthor( string a , int i);
    string getAuthors(int i);


	void setNoAuthors(string auths[], int count);
	void showNoAuthors();
	void updateNoAuthors(int);
	int getNoAuthors();

	void setauthCount(int);
	int getauthCount();

	void showPublisher();
    void setPublisher( string );
    void updatePublisher( string );
    string getPublisher();

	void showPublishYear();
	void setPublishYear(string);
	void updatePublishYear(string);
	string getPublishYear();

    void setISBN( string );
    void showISBN();
    void updateISBN( string );
    string getISBN();
    bool compareISBN( string );

	void setCopies(int);
	void showCopies();
	void updateCopies(int);
	int getCopies();

    void setPrice( double );
    void showPrice();
    void updatePrice( double );
    double getPrice();

private:
    string title;
    string authors[ 4 ];
    string publisher;
	string PublishYear;
    string ISBN;
    double price;
    int copies;
    int authorsNo;
	int NoAuthors;
	int authCount;

};   
