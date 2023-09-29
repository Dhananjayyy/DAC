#include <iostream>
using namespace std;

int main()
{
    const int a = 20;

    const int* p = &a;
    int *ptr;

    // ptr = p; //const int* to int* not possible
    ptr = const_cast<int *>(p);
    *ptr = 30;
    cout << *ptr;
    cout << *p;
}