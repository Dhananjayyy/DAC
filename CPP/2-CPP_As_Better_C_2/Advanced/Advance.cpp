#include <iostream>
using namespace std;

typedef struct Student
{
    int rNo;
    char sName[10];
    int numSubjects;
    int *marks;
    int totalmark;
} Std;

void accept(Std *, int);
void display(Std *, int);
void calculateTotalMarks(Std *, int);

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Std *s = new Std[n];
    accept(s, n);
    calculateTotalMarks(s, n);
    display(s, n);
}

void accept(Std *s, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << "Roll no of Student " << i + 1 << " : ";
        cin >> s[i].rNo;
        cout << "Name of Student " << i + 1 << " : ";
        cin >> s[i].sName;
        cout << "No of subjects of Student " << i + 1 << " : ";
        cin >> s[i].numSubjects;

        s[i].marks = new int[s[i].numSubjects];
        for (int j = 0; j < s[i].numSubjects; j++)
        {
            cout << "Subject " << j + 1 << " marks: ";
            cin >> s[i].marks[j];
        }
    }
}

void calculateTotalMarks(Std *s, int size)
{
    for (int i = 0; i < size; i++)
    {
        s[i].totalmark = 0;
        for (int j = 0; j < s[i].numSubjects; j++)
        {
            s[i].totalmark += s[i].marks[j];
        }
    }
}

void display(Std *s, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << " : Roll No. " << s[i].rNo << ", Name " << s[i].sName << ", No of subjects: "
             << s[i].numSubjects << ", Total marks: " << s[i].totalmark << endl;
    }
}
