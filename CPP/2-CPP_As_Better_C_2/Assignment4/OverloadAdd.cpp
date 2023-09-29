#include <iostream>
using namespace std;

void add(int,int);
void add(int, int, int);
void add(float,float);
void add(int, float);
void add(float, int);
// int add(int, int);

int main()
{
    add(10,20);
    add(10,20,30);
    add(10.12f,20.09f,30.33f);
    add(10,12.34f);
    add(23.14f, 10);
}

void add(int a,int b)
{
    cout << "The addition using void add(int,int) is: " << a+b << endl;
}

void add(int a,int b, int c)
{
    cout << "The addition using void add(int,int, int) is: " << a+b << endl;
}

void add(float a,float b)
{
    cout << "The addition using void add(float,float) is: " << a+b << endl;
}

void add(int a,float b)
{
    cout << "The addition using void add(int, float) is: " << a+b << endl;
}

void add(float a,int b)
{
    cout << "The addition using void add(float, int); is: " << a+b << endl;
}
