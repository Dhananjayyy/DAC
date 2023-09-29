#include "Address.h"

Address::Address():pin(0){}
Address::Address(int p,const char* a, const char* c):pin(p),area(a),city(c){}

void Address::Display() const
{
    cout << "Pincode: " << pin;
    cout << " ";
    area.Display();
    cout << " ";
    city.Display();
    cout << " ";
}