// Dhananjay Yelwande
// PRN: 230943020025

/* Assignment 1:
Create Structure of Employee having following attributes
employee_id, employee_name, salary
accept and display data about 5 employees using funtion
*/

#include <iostream>
using namespace std;


typedef struct Employee
{
    int eID;
    char eName;
    int eSalary;
}Emp;

void accept(Emp *);
void display(Emp *);

int main()
{
    int i = 0;
    Emp *e = new Emp[5];
    accept(e);
    display(e);
}

void accept(Emp *e)
{
    cout << "Enter Employee ID, Name and Salary" << endl;
    for(int i=0;i<5;i++)
    {
        cout << "Enter Employee " << i+1 << endl;
        cin >> e[i].eID >> e[i].eName >> e[i].eSalary;
    }
}

void display(Emp *em)
{
    cout << "Your Employee ID, Name and Salary: " << endl;
    for(int i=0;i<5;i++)
    {
        cout << "Employee: " << i+1 << endl;
        cout << em[i].eID << " " << em[i].eName << " " << em[i].eSalary << endl;
    }
}


