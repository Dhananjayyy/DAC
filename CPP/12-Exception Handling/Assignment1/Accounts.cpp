#include <iostream>
#include <string.h>
using namespace std;

class AmountExceeded : public exception
{
public:
    const char *what()
    {
        return "Amount exceeded";
    }
};

class MinimumBalance : public exception
{
public:
    const char *what()
    {
        return "Balance low";
    }
};

class Account
{
    int acno;
    char name[20];
    double balance;

public:
    Account();
    Account(int, const char *, double);
    void Display();
    void Deposit(double);
    void Withdraw(double);
};

int main()
{
    int ch, c; double n;
    Account a1(101, "Dhananjay", 10000);
    do
    {
        cout << "Choose: " << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
            case 1:
            {
                cout << "Enter the amount to deposit: ";
                cin >> n;
                a1.Deposit(n);
                break;
            }
            case 2:
            {
                cout << "Enter the amount to withdraw: ";
                cin >> n;
                a1.Withdraw(n);
                break;
            }
            case 3:
            {
                a1.Display();
                break;
            }
        }
    } while (ch!=0);
}

Account::Account()
{
    acno = 0;
    strcpy(name, "NA");
    balance = 0;
}

Account::Account(int ac, const char *n, double b)
{
    acno = ac;
    strcpy(name, n);
    balance = b;
}

void Account::Display()
{
    cout << "Acc. No: " << acno << " Name: " << name << " Balance: " << balance << endl;
}

void Account::Deposit(double d)
{
    if (d > 50000)
    {
        int p = 0;
        cout << "Enter PAN No.: ";
        cin >> p;
        if (p)
        {
            cout << "PAN Accepted" << endl;
            balance += d;
            cout << "Balance deposited" << d << endl;
        }
        else
        {
            //cout << "Pan Required" << endl;
            throw AmountExceeded();
        }
    }
    else
    {
        balance += d;
        cout << "Balance Deposited: " << d << endl;
    }
}

void Account::Withdraw(double d)
{
    int check = balance - d;
    if (check < 10000)
    {
        // cout << "Cannot withdraw if Minimum Balance goes below 10000" << endl;
        throw MinimumBalance();
    }
    else
    {
        balance -= d;
        cout << "Amount Withdrawn: " << d << endl;
    }
}