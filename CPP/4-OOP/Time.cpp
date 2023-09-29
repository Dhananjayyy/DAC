#include <iostream>
using namespace std;
class Time
{
    int hr, min, sec;
    public:
    Time();
    Time(int, int=99);
    Time(int, int, int);
    void Display();
};
int main()
{
    Time t1;
    t1.Display();
    Time t2(12);
    t2.Display();
    Time t3(12,55,15);
    t3.Display();
}
Time::Time()
{
    hr=min=sec=0;
}
Time::Time(int h, int s)
{
    hr=min=h;
    sec=s;
}
Time::Time(int h, int m, int s)
{
    hr=h; min=m; sec=s;
}
void Time::Display()
{
    cout << "Time: " << hr << ":" << min << ":" << sec << endl;
}