// Dhananjay Yelwande
// PRN: 230943020025

/* Assignment 2:
Create class Date with data members Day, Month and Year
Write Member functions getDate() and setDate()
getDate() will display date with "/" seperated.
setDate() will take three arguments.
Assign values to Day, Month and Year data member.
*/

#include <iostream>
using namespace std;


class Date
{
    int day, month, year;
    public:
    void setDate(int, int, int);
    void getDate();
};

int main()
{
    Date D;
    D.setDate(1,1,2023);
    D.getDate();
}

void Date::getDate()
{
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}

void Date::setDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}