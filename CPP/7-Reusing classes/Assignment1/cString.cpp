#include "cString.h"
#include <string.h>

cString::cString()
{
    len = 1;
    str = new char[len];
    strcpy(str,"\0");
}

cString::cString(const char *s)
{
    this->len = strlen(s);
    this->str = new char[this->len + 1];
    strcpy(this->str,s);
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

bool cString::operator<(cString &o)
{
    if (this->len < o.len)
    {
        return true;
    }
    return false;
}

bool cString::operator>(cString &o)
{
    if (this->len > o.len)
    {
        return true;
    }
    return false;
}

bool cString::operator==(cString &o)
{
    if (this->len == o.len)
    {
        return true;
    }
    return false;
}

char& cString::operator[](int pos)
{
    if (pos >=0 && pos < this->len)
    {
        return str[pos];
    }
    return this->str[pos];
}

cString::~cString()
{
    delete[] str;
}

void cString::Display() const
{
    cout << str;
}

