#include <iostream>
#include "Employment.cpp"
using namespace std;

class DataBase : public Emp
{
public:
    void Display()
    {
        cout << "DataBase Display";
    }
    void Test()
    {
        cout << "DataBase Test";
    }
    void CreateDatabase()
    {
        cout << "DataBase Create DataBase";
    }
};