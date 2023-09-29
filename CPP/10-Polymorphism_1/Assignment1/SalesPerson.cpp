#include <iostream>
#include "Employee.cpp"
using namespace std;

class SalesPerson : public Emp
{
private:
    int numSales, commission;

public:
    SalesPerson();
    SalesPerson(int, int, int, double, int, const char *);
    void Display();
    void calcSalary();
};

SalesPerson::SalesPerson()
{
    this->numSales = numSales;
    this->commission = commission;
}

SalesPerson::SalesPerson(int numSales, int commission, int empid, double salary, int age, const char *name):Emp(empid, salary, age, name)
{
    this->numSales = numSales;
    this->commission = commission;
}

void SalesPerson::Display()
{
    Emp::Display();
    cout << " Number of Sales: " << numSales << " Commision: " << commission;
}

void SalesPerson::calcSalary()
{
    cout << " Sales Salary: " << Emp::salary + (numSales * commission);
}

/* int main()
{
    SalesPerson w1(5, 250, 12, 54000, 24, "Dhananjay");
    w1.Display();
    w1.calculateSalary();
} */