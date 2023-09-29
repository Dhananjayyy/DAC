#include <iostream>
#include "Date.cpp"
using namespace std;

class Student
{
    int rNo;
    char name[10];
    Date dob;
    Date doa;
    public:
    Student();
    Student(int,const char[], int, int, int, int, int, int);
    void Display();
};