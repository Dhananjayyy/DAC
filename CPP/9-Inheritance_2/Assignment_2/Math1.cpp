#include <iostream>
using namespace std;

class Math1
{
    int a, b;

public:
    void Addition(int, int);
    void Subtraction(int, int);
    void calculateArea();
};

void Math1::Addition(int a, int b)
{
    cout << "Addition: " << a+b << endl;
}

void Math1::Subtraction(int a, int b)
{
    cout << "Subtraction: " << a-b << endl;
} 

void Math1::calculateArea()
{
    cout << "Area: " << a * b << endl;
}