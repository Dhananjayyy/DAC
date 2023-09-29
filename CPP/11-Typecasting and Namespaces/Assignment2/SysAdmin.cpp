#include <iostream>
#include "Employment.cpp"
using namespace std;

class SystemAdministrator : public Emp
{
public:
    void Display()
    {
        cout << "SysAdmin Display";
    }
    void Test()
    {
        cout << "SysAdmin Test";
    }
    void SystemUpdate()
    {
        cout << "SysAdmin Create DataBase";
    }
};