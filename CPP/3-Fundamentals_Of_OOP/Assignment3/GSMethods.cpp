// Dhananjay Yelwande
// PRN: 230943020025

/* Assignment 3:
Use the same class and write getter and setter member functions for all data members.
Optional: Check date - Day: 1 to 31 according to month, Month: 1 to 12, Year: 
*/

#include <iostream>
using namespace std;


class Date
{
    int day, month, year;
    public:
    void setDate(int, int, int);
    void getDate();
    int getDay();
    int getMonth();
    int getYear();

    bool checkMonthFormat();
    bool checkDayFormat();
    bool checkYearFormat();
    bool isFeb();
    bool isLeapYear();
};

int main()
{
    Date D;
    D.setDate(31,11,2008);
    
    if (D.checkDayFormat() && D.checkMonthFormat() && D.checkYearFormat())
    {
        D.getDate();
        cout << "Day: " << D.getDay() << endl;
        cout << "Month: " << D.getMonth() << endl;
        cout << "Day: " << D.getYear() << endl;
    }
    else
    {
        cout << "Invalid Format";
    }
    cout << endl;
    cout << "D " << D.checkDayFormat()<<endl;
    cout << "M " << D.checkMonthFormat()<<endl;
    cout <<"Y " << D.checkYearFormat()<<endl;
    cout <<"Feb " << D.isFeb()<<endl;
    cout <<"Leap " << D.isLeapYear()<<endl;
}

void Date::setDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void Date::getDate()
{
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

bool Date::checkMonthFormat()
{
    int i;
    int month_count = 12;

    if (month <= 12 && month >= 1)
    {
        return true;
    }

    return false;
}


bool Date::checkDayFormat()
{
    int i;
    int day_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (isLeapYear() && isFeb())
    {
        day_per_month[1] == 29;
    }

    if (day <= day_per_month[month-1] && day > 0)
    {
        return true;
    }
    return false;

}

bool Date::checkYearFormat()
{
    int minYear = 1900;
    int maxYear = 3000;
    if (year < maxYear && year > minYear)
    {
        return true;
    }
    
    return false;
}

bool Date::isLeapYear()
{
    if (year % 4 == 0)
    {
        return true;
    } 
    return false;
}

bool Date::isFeb()
{
    if (month == 2)
    {
        return true;
    }
    return false;
}