#include <iostream>
#include "Address.cpp"
using namespace std;

class Employee
{
    int empID;
    cString eName;
    const Address permAddress;
    Address curAddress;
    public:
    Employee();
    Employee(int, const char*, int, const char*, const char*, int, const char*, const char*);
    void Display() const;
};