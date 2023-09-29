#include <iostream>
using namespace std;
class Date
{
    int day, month, year;
    public:
    Date();
    Date(int, int);
    Date(int, int, int);
    void setDate(int, int, int);
    void Display();
    int getDay();
    int getMonth();
    int getYear();
};
int main()
{
    // No/Default constructor 
    Date d1;
    d1.Display();
    // Parameterized constructor
    Date d2(2, 2000);
    d2.Display();
    Date d3(1, 3, 2000);
    d3.Display();
}
Date::Date()
{
    day=14;
    month=9;
    year=2023;
}
Date::Date(int a, int b)
{
    day=month=a;
    year=b;
}
Date::Date(int a, int b, int c)
{
    day=a;
    month=b;
    year=c;
}
void Date::Display()
{
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}
void Date::setDate(int a, int b, int c)
{
    day = a;
    month = b;
    year = c;
}
int Date::getDay()
{
    return day;
}
int Date::getMonth()
{
    return month;
}
int Date::getMonth()
{
    return year;
}