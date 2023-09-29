#include <iostream>
#include <string.h>
using namespace std;
#ifndef e
#define e
class Emp
{
    char name[20];

public:
    Emp()
    {
        strcpy(name,"NA");
    }
    Emp(const char name[20])
    {
        strcpy(this->name, name);
    }
    virtual void Display();
};

void Emp::Display() 
{
    cout << name;
}

/* int main()
{
    Emp e1("Dhananjay");
    e1.Display();
} */

#endif