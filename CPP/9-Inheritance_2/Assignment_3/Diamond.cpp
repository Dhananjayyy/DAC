#include <iostream>
#include "C:\Users\Dhananjay\Desktop\CPP\Inheritance_2\Assignment_1\SalesPerson.cpp"
#include "C:\Users\Dhananjay\Desktop\CPP\Inheritance_2\Assignment_1\Manager.cpp"
using namespace std;

class Calculate:public Math1, public Math2{};

int main()
{
    Calculate c1;
    c1.Addition(10,20);

    Calculate c2;
    c2.Addition(40,50); 
    //c2.calculateArea();
}