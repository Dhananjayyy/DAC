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
    void Display() const;
};

Person::Person(){}
Person::Person(const char* str, int d, int m, int y):name(str),dob(d,m,y){}

void Person::Display() const
{
    name.Display();
    cout << " ";
    dob.Display();
}

// int main()
// {
//     Person p1;
//     p1.Display();

//     Person p2("Person",1,2,2030);
//     p2.Display();
// }
