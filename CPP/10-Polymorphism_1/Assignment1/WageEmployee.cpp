#include <iostream>
#include "Employee.cpp"
using namespace std;

class WageEmp : public Emp
{
    int hrs, rate;

public:
    WageEmp();
    WageEmp(int, int, int, double, int, const char *);
    void Display();
    void calcSalary();
};

WageEmp::WageEmp()
{
    hrs = rate = 0;
}

WageEmp::WageEmp(int hrs, int rate, int empid, double salary, int age, const char *name) : Emp(empid, salary, age, name)
{
    this->hrs = hrs;
    this->rate = rate;
}

void WageEmp::Display()
{
    Emp::Display();
    cout << "Hours: " << hrs << " Rate: " << rate << " ";
}

void WageEmp::calcSalary()
{
    cout << "Wage Salary: " << Emp::salary + (salary * rate);
}

/* int main()
{
    WageEmp w1(12, 10, 101, 54000, 24, "Dhananjay");
    w1.Display();
    w1.calculateSalary();
} */