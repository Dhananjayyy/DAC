#include <iostream>
#include <string.h>
using namespace std;

class cString
{
    int len;
    char *str;

public:
    cString();
    cString(const char *);
    cString(cString &);
    cString operator=(cString &);
    void Display() const;
    ~cString();
};

cString::cString()
{
    len = 1;
    str = new char[len];
    strcpy(str, "\0");
}

cString::cString(const char *s)
{
    this->len = strlen(s);
    this->str = new char[len + 1];
    strcpy(this->str, s);
}

cString::cString(cString &o)
{
    this->len = o.len;
    this->str = new char[this->len + 1];
    strcpy(this->str, o.str);
}

cString cString::operator=(cString &o)
{
    this->len = o.len;
    this->str = new char[this->len + 1];
    strcpy(this->str, o.str);
    return *this;
}

cString::~cString()
{
    delete[] str;
}

void cString::Display() const
{
    cout << str;
}

// int main()
// {
//     cString s1;
//     s1.Display();

//     cString s2("Hello");
//     s2.Display();
// }