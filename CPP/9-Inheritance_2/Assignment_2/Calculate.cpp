#include <iostream>
#include "Math1.cpp"
#include "Math2.cpp"
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