#include <iostream>
#include "Employee.cpp"
using namespace std;

class Manager : public Emp
{
private:
    int ta, hra;

public:
    Manager();
    Manager(int, int, int, double, int, const char *);
    void Display();
    void calcSalary();
};

Manager::Manager()
{
    ta = hra = 0;
}

Manager::Manager(int ta, int hra, int id, double sal, int age, const char *name):Emp(id,sal,age,name)
{
    this->ta = ta;
    this->hra=hra;
}

void Manager::Display()
{
    Emp::Display();
    cout << "Travel Allowance: " << ta << " House Rent Allowance: " << hra;
}

void Manager::calcSalary()
{
    cout << " Manager Salary: " << Emp::salary + ta + hra;
}

/* int main()
{
    Manager m1(2000, 15000, 1, 54000, 4, "Dhananjay");
    m1.Display();
    m1.calculateSalary();
} */