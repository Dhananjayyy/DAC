// Dhananjay Yelwande
// PRN: 230943020025

/* Assignment 5
Create class Point having data member as x, y (coordinates)
Add member function to accept values and display the coordinates like [10,20]
*/

class Point
{
    int x, y;
    public:
    void setPoint(int, int);
    void displayPoint();
};

#include <iostream>
using namespace std;

int main()
{
    Point P1;
    P1.setPoint(10,20);
    P1.displayPoint();
}

void Point::setPoint(int a, int b)
{
    x=a;
    y=b;
}

void Point::displayPoint()
{
    cout << "[" << x << "," << y << "]" << endl;
}