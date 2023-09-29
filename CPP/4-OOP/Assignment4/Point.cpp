#include <iostream>
using namespace std;

class Point
{
    int x,y;
    static int count;
    public:
    Point();
    void Display();
    void getObjectCOunt();
};
int Point::count = 0;
int main()
{
    Point p1;
    p1.Display();
    p1.getObjectCOunt();

    Point p2;
    p2.Display();
    p2.getObjectCOunt();
}

Point::Point()
{
    count++;
    x=y=1;
}

void Point::Display()
{
    cout << "[" << x << "," << y << "]" << endl;
}

void Point::getObjectCOunt()
{
    cout << count;
}
