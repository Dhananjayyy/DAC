#include "Person.h"

Person::Person()
{

}

Person::Person(const char* str, int d, int m, int y):name(str), dob(d,m,y){}

void Person::Display()
{
    name.Display();
    dob.Display();
}

int main()
{
    Person p1;
    p1.Display();

    Person p2("Dhananjay",10,10,2023);
    p2.Display();
}
