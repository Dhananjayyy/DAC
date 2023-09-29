#include <iostream>
#include <string.h>
using namespace std;

class Bank
{
    static int acNo;
    char name[20];
    int balance;
    static float interestRate;
    public:
    Bank(char*, int);
    void display() const;
    static void setInterestRate(float);
};

float Bank::interestRate = 10.5f;
int Bank::acNo = 0;

int main()
{
    char x[20] = "abcd";
    Bank b1(x, 10000);
    b1.display();

    Bank b2(x, 20000);
    b2.setInterestRate(8.5f);
    b2.display();

    return 0;
}

Bank::Bank(char *name, int balance)
{
    acNo++;
    this->acNo = acNo;
    strcpy(this->name,name);
    this->balance = balance;
    this->interestRate = interestRate;
}

void Bank::display() const
{
    cout << "Account No: " << acNo << " Name: " << name << " Balance: " << balance << " Interest Rate: " << interestRate << endl;
}


void Bank::setInterestRate(float i)
{
    interestRate = i;
}

