#include <iostream>
using namespace std;

class Math2
{
    int a, b;

public:
    void Multiplication(int, int);
    void Division(int, int);
    void calculateArea();
};

void Math2::Multiplication(int a, int b)
{
    cout << "Addition: " << a+b << endl;
}

void Math2::Division(int a, int b)
{
    cout << "Subtraction: " << a-b << endl;
}

void Math2::calculateArea()
{
    cout << "Area: " << 3.14 * a * b << endl;
}