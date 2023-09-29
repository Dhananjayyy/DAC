#include <iostream>
#include "/mnt/c/Users/Dhananjay/Desktop/CPP/Inheritance_1/Assignment1/Employee.cpp"
using namespace std;

class Wage : public Emp
{
    int hrs;
    double rate;

public:
    Wage();
    Wage(int, double, int, const char *, double, int, int, int);
    void Display();
};

Wage::Wage()
{
    hrs = rate = 0;
}

Wage::Wage(int hrs, double rate, int eid, const char *name, double salary, int d, int m, int y) : Emp(eid, name, salary, d, m, y)
{
    this->hrs = hrs;
    this->rate = rate;
}

void Wage::Display()
{
    Emp::Display();
    cout << " Hours: " << hrs << "Rate: " << rate << endl;
}

int main()
{
    Wage w1;
    w1.Display();

    Wage w2(24,6,101,"Dhananjay",55000,2,2,2023);
    w2.Display();
}