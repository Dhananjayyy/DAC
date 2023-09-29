#include <iostream>
using namespace std;

int main()
{
    int a = 11;
    float b;
    {
        // implicit
        b = a / 2;
        cout << "implicit: " << b << endl;
    }
    {
        // explicit (c way)
        b = (float)a / 2;
        cout << "Explicit: " << b << endl;
    }
    {
        // static cast (c++ way)
        b = static_cast<float>(a / 2);
        cout << "static cast: " << b << endl;
    }
}