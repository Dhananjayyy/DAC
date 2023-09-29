#include <iostream>
using namespace std;

class Date
{
    int day, month, year;
    public:
    Date();
    Date(int, int, int);
    void Display() const;
};