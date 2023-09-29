#include <iostream>
using namespace std;

template <class T>

void cSwap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    char a, b;
    cout << " Enter a and b" << endl;
    cin >> a >> b;
    cout << a << " " << b << endl;
    cSwap(a, b);
    cout << a << " " << b << endl;
}
