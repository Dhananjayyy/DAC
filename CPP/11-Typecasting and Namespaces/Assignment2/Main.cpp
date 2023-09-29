#include <iostream>
#include "Employment.cpp"
#include "Programmer.cpp"
#include "DataBase.cpp"
#include "SysAdmin.cpp"
using namespace std;

int main()
{
    int i, ch;
    bool loop = true;
    Emp *emp[5];
    emp[0] = new Programmer();
    emp[1] = new DataBase();
    emp[2] = new SystemAdministrator();
    emp[3] = new Programmer();
    emp[4] = new DataBase();

    for (i = 0; i < 5; i++)
    {
        emp[i]->Display();
    }

    do
    {
        cout << "Choose: " << endl;
        cout << "1. Programmer" << endl;
        cout << "2. DataBase Administrator" << endl;
        cout << "3. System Administrator" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 0:
        {
            loop = false;
            break;
        }
        }
    } while (loop);
}