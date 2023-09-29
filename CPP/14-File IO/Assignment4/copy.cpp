#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class cEmployee
{
    int eID;
    char name[20];
    double salary;

public:
    cEmployee();
    void Accept();
    void Display();
    void saveRecord(cEmployee &);
    void displayAllRecords();
};

int main()
{
    int n;
    cout << "Enter no. of employees to store: ";
    cin >> n;
    cEmployee *e = new cEmployee[n];

    for (int i = 0; i < n; i++)
    {
        cout << "For Employee No.: " << i + 1 << endl;
        e[i].Accept();
        e[i].saveRecord(e[i]);
    }

    cout << "Employee Records:" << endl;
    e[0].displayAllRecords();

    delete[] e;
}

cEmployee::cEmployee()
{
    eID = 0;
    strcpy(name, "NA");
    salary = 10000;
}

void cEmployee::Accept()
{
    cout << "Enter Employment ID, Name, and Salary" << endl;
    cin >> this->eID >> this->name >> this->salary;
}

void cEmployee::Display()
{
    cout << "Employee No.: " << eID << " Name: " << name << " Salary: " << salary << endl;
}

void cEmployee::saveRecord(cEmployee &e)
{
    ofstream fout("EmployeeData.dat", ios::app | ios::binary);
    fout.write((char *)&e, sizeof(cEmployee));
    fout.close();
}

void cEmployee::displayAllRecords()
{
    ifstream fin("EmployeeData.dat", ios::binary);
    while (fin.read((char *)this, sizeof(cEmployee)))
    {
        Display();
    }
    fin.close();
}