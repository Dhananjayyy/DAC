#include <iostream>
#include <string.h>
using namespace std;

class Account
{
    int acno;
    char *name;
    double balance;

public:
    Account();
    Account(int, const char *, double);
    void Display();
};

int main()
{
    Account a1(101,"Dhananjay",10000);
    a1.Display();
}

Account::Account()
{
    acno = 0;
    strcpy(name, "NA");
    balance = 0;
}

Account::Account(int ac, const char* n, double b)
{
    acno = ac;
    strcpy(name, n);
    balance = b;
}

void Account::Display()
{
    cout << "Acc. No: " << acno << "Name: " << name << " Balance: " << balance << endl;
}