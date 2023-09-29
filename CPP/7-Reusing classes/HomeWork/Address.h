#include <iostream>
#include "C:\Users\Dhananjay\Desktop\CPP\Reusing classes\Assignment1\cString.cpp"
using namespace std;

class Address
{
    int pin;
    cString area, city;
    public:
    Address();
    Address(int,const char*, const char*);
    void Display() const;
};