#include <iostream>
using namespace std;
void getAddMul(int*, int*, int*, int*);

int main()
{
    int a, b, sum, product = 0;
    cout << "Enter two numbers \n";
    cout << "No 1: ";
    cin >> a;
    cout << "No 2: ";
    cin >> b;
    int* p = &a;
    int* q = &b;
    int* r = &sum;
    int* s = &product;
    getAddMul(p, q, r, s);
    cout << "The addition of " << a << " and b " << b << " is " << sum << " and the product is " << product <<endl;
}

void getAddMul(int *a, int *b, int *s, int *p)
{
    *s = *a + *b;
    *p = *a * *b;
}