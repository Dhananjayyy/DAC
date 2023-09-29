#include <iostream>
#include "Person.cpp"
using namespace std;

class Emp : public Person
{
private:
    int empid;

protected:
    double salary;

public:
    Emp();
    Emp(int, double, int, const char *);
    // double getSalary();
    void Display();
};

Emp::Emp()
{
    empid = salary = 0;
}

Emp::Emp(int empid, double salary, int age, const char *name) : Person(age, name)
{
    this->empid = empid;
    this->salary = salary;
}

void Emp::Display()
{
    Person::Display();
    cout << "EID: " << empid << " Salary: " << salary << " ";
}

/* double Emp::getSalary()
{
    return salary;
} */
