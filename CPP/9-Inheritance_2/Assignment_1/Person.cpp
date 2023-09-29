#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    int age;
    char name[20];

public:
    Person();
    Person(int, const char *);
    void Display();
};

Person::Person()
{
    age = 0;
    strcpy(name, "NA");
}

Person::Person(int age, const char *name)
{
    this->age = age;
    strcpy(this->name, name);
}

void Person::Display()
{
    cout << "Name: " << name << " Age: " << age << " ";
}
