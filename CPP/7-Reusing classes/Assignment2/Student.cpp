#include "Student.h"
#include <string.h>

Student::Student():rNo(0)
{
    strcpy(name,"");
}

Student::Student(int r,const char n[10], int d, int m, int y, int ad, int am, int ay):rNo(r),dob(d,m,y),doa(ad,am,ay)
{
    strcpy(name,n);
}

void Student::Display()
{
    cout << rNo << " " << name << " " << endl;
    dob.Display();
    doa.Display();
}


int main()
{
    int i;
    Student *s = new Student[5];

    for (i=0; i<5; i++)
    {
        int r, dob,mob, yob, doa,moa,yea; char name[10];
        cout << "Enter Roll No, Name, Day of DOB, Month of DOB, Year of DOB, Day of Admission, Month of Admission, Year of Admission" << endl;
        cin >> r >> name >> dob >> mob >> yob >> doa >> moa >> yea;
        s[i] = Student(r,name,dob,mob,yob,doa,moa,yea);
    }
    
    for (i=0; i<5; i++)
    {
        s[i].Display();
    }
    
}