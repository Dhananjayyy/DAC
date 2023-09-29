// Program to to Multiply function with three arguments and call function by passing 1 argument, 2 argument and no argument

#include <iostream>
using namespace std;

int multiply(int=1,int=1,int=1);

int main()
{
    int a, b, c;
    cout << "Enter three integers: " << endl;
    cin >> a >> b >> c;
    cout << "The multiplication of " << a << " and " << b << " and " << c << " : " << endl;
    cout << "1. By Passing no arguments: "<< multiply() << endl;
    cout << "1. By Passing two arguments: "<< multiply(a,b) << endl;
    cout << "1. By Passing one argument: "<< multiply(a) << endl;
}

int multiply(int x, int y, int z)
{
    return x*y*z;
}