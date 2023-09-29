#include "Date.h"
/*
int main()
{
    Date d1;
    d1.Display();
}
*/

Date::Date()
{
    day=1; month=1; year= 2023;
}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::Display() const
{
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}