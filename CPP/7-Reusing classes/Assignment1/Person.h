#include <iostream>
#include "cString.cpp"
#include "Date.cpp"
using namespace std;

class Person
{
    cString name;
    Date dob;
    public:
    Person();
    Person(const char*, int, int, int);
    void Display();
};