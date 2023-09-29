#include <iostream>
#include "Person.cpp"
using namespace std;

class Emp : public Person
{
    int eid;
    double salary;

public:
    Emp();
    Emp(int, const char *, double, int, int, int);
    void Display();
};

Emp::Emp()
{
    eid = 0;
    salary = 0;
}

Emp::Emp(int eid, const char *name, double salary, int d, int m, int y) : Person(name, d, m, y)
{
    this->eid = eid;
    this->salary = salary;
}

void Emp::Display()
{
    cout << "ID: " << eid << " ";
    Person::Display();
    cout << " Salary: " << salary;
}

// int main()
// {
//     cout << "Emp 1" << endl;
//     Emp e1;
//     e1.Display();

//     cout << "Emp 2" << endl;
//     Emp e2(1, "Dhananjay", 10000, 10, 10, 2023);
//     e2.Display();

//     cout << "Person 1" << endl;
//     Person p1;
//     p1.Display();

//     cout << endl;
//     cout << "Person 2" << endl;
//     Person p2("Dhananjay", 20, 20, 2024);
//     p2.Display();
// }