#include <iostream>
#include "SalesPerson.cpp"
#include "Manager.cpp"
#include "WageEmployee.cpp"
using namespace std;

int main()
{
    Emp *p[5];
    p[0] = new Manager(1500, 2000, 4, 54000, 55, "Dhananjay");
    p[0]->Display();
    
    p[1] = new SalesPerson(15, 200, 4, 54000, 70, "Dhananjay");
    p[1]->Display();

    p[2] = new WageEmp(12, 10, 101, 54000, 24, "Dhananjay");
    p[2]->Display();
}