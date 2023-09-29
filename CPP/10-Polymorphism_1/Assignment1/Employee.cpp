#include <iostream>
#include "Person.cpp"
using namespace std;
#ifndef EMP
#define EMP
class Emp : public Person
{
private:
    int empid;

protected:
    double salary;

public:
    Emp();
    Emp(int, double, int, const char *);
    virtual void calcSalary() = 0;
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
#endif

/* double Emp::getSalary()
{
    return salary;
} */
