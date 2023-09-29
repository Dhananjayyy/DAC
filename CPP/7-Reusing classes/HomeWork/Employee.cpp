#include "Employee.h"

Employee::Employee():empID(0){}
Employee::Employee(int id, const char* n,int p, const char* a, const char* c,int pp, const char* pa, const char* pc):empID(id),eName(n),permAddress(p,a,c),curAddress(pp,pa,pc){}

void Employee::Display() const
{
    cout << empID << " ";
    eName.Display();
    cout << " ";
    permAddress.Display();
    curAddress.Display();
}

int main()
{
    Employee e1(1,"Dhananjay",411001,"Karvenagar","Pune",414105,"Sonai", "Ahmednagar");
    e1.Display();
}