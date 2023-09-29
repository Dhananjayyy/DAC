#include <iostream>
#include "Employment.cpp"
using namespace std;

class Programmer : public Emp
{
public:
    void Display()
    {
        cout << "Programming Display";
    }
    void Test()
    {
        cout << "Programming Test";
    }
    void Coding()
    {
        cout << "Programming Decoding";
    }
};