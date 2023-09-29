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

Date::Date()
{
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::Display() const
{
    cout << day << "/" << month << "/" << year;
}

// int main()
// {
//     Date d1(1,1,2020);
//     d1.Display();
// }