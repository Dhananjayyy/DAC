#include <iostream>
#include<typeinfo>
using namespace std;
// Run on visual studio
// typeid().name() outputs data type of each variable
// 

int main()
{
    int a; float b; char c; char ch[20];
    class Demo
    {
    };

    cout << "a is: " << typeid(a).name() << endl;
    cout << "b is: " << typeid(b).name() << endl;
    cout << "c is: " << typeid(c).name() << endl;
    cout << "ch is: " << typeid(ch).name() << endl;
    cout << "Demo is: " << typeid(Demo).name() << endl;
}