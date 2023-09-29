#include "BookShelf.h"
#include <string.h>

int Book::bookID=100;

void Book::Display() const
{
    cout << "ID: " << bookID << " Book: " << bookname << " Price: " << price << endl;
}

Book::Book()
{
    bookID++;
    bookname = new char[1];
    strcpy(bookname,"\0");
    price = 0.0f;
}

Book::Book(const char* n, float p)
{
    bookID++;
    this->price = p;
    this->bookname = new char[strlen(n) + 1];
    strcpy(this->bookname, n);
}

Book::Book(Book &b)
{
    bookID++;
    this->price = b.price;
    this->bookname = new char[strlen(b.bookname)+1];
    strcpy(this->bookname,b.bookname);
}

Book::~Book()
{
    delete[] bookname;
}


int main()
{

    Book b1("CPP",0.23f);
    b1.Display();

    Book b2=b1;
    b2.Display();

    
}