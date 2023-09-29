#include <iostream>
#include <cstring>
using namespace std;

typedef struct Student
{
    int rollNo;
    char name[10];
    int marks;

    void Accept()
    {

        cout << "Enter Roll No., Name of the Student and Marks" << endl;
        cin >> rollNo >> name >> marks;
    }

    void Display()
    {
        cout << "----------------- \n";
        cout << "Roll No.: " << rollNo << endl << "Name of the Student: " << name << endl << "Marks: " << marks << endl;
        cout << "----------------- \n";
    }

}Stud;

int getTopStudent(Stud[], int);


int main()
{
    /* Stud s1;
    s1.Accept();
    s1.Display();

    Stud s2;
    s2.Accept();
    s2.Display();

    Stud s3;
    s3 = {3, "Neeta" , 23};
    s3.Display();

    Stud s4;
    s4.rollNo = 4;
    strcpy(s4.name, "Reeta");
    s4.marks = 25;
    s4.Display();

    Stud *s5;
    s5 = new Stud;
    s5 -> Accept();
    s5 -> Display();
    delete s5; */

    int i;
    Stud s[5];

    for (i=0;i<5;i++)
    {
        s[i].Accept();
    }

    for (i=0;i<5;i++)
    {
        s[i].Display();
    }

    int t = getTopStudent(s,5);

    cout << "---- \n" << "Max marks: " << s[t].name;
}


int getTopStudent(Stud s[], int size)
{
    int max = s[0].marks;
    int top;
    for (int i = 1; i < size;i++)
    {
        if (s[i].marks > max)
        {
            max = s[i].marks;
            top = i;
        }
    }

    return top;
}