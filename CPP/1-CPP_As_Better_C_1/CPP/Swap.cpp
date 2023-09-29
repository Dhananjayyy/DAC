// swap using pass by reference
#include <iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a = 4, b = 7;
    cout << a << " " << b << endl;
    swap(a,b);
    cout << a << " " << b << endl;
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}