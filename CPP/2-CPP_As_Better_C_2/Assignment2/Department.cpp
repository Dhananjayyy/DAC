#include <iostream>
using namespace std;

typedef struct Department
{
    int id;
    char name[10];
}Dept;

int main()
{
    int size;
    cout << "Enter number of departments to add: ";
    cin >> size;
    Dept *d = new Dept[size];
    for (int i = 0; i <size;i++)
    {
        int id;
        char name[10];
        cout << "----------\n";
        cout << "Department " << i+1 <<" : \n";
        cout << "Enter id: ";
        cin >> d[i].id;
        cout << "Enter name: ";
        cin >> d[i].name;
    }

    cout << "----------\n";
    cout << "Your information: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Department " << d[i].id <<" : " << d[i].name << endl;
    }
}