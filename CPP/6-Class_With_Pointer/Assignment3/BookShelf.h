#include <iostream>
using namespace std;

class Book 
{
    static int bookID;
    char* bookname;
    float price;
    public:
    void Display() const;
    Book();
    Book(const char*,float);
    Book(Book &);
    ~Book();
};