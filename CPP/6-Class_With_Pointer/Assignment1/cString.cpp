#include <iostream>
#include <string.h>
using namespace std;

class cString
{
    int length; char* str;
    public:
    cString();
    cString(const char*);
    cString(cString &);
    void display();
    ~cString();
};

int main()
{
    cString c1("One");
    c1.display();
    cout << endl;

    cString c2("Two");
    c2.display();
    cout << endl;

    cString c3 = c2; // or c3(c2)
    c3.display();
    cout << endl;

    cString c4 = "Four"; // or c3(c2)
    c4.display();
    cout << endl;
}

cString::cString()
{
    length = 1;
    str = new char[length];
    str[0] = '\0';
}

cString::cString(const char* s)
{
    this->length = strlen(s);
    this->str = new char[this->length+1];
    this->str = strcpy(this->str,s);
}

cString::cString(cString &o)
{
    this->length = o.length;
    this->str = o.str;  
}

void cString::display()
{
    cout << "len: " << length << " str: " << str;
}

cString::~cString()
{
    delete[] str;
}