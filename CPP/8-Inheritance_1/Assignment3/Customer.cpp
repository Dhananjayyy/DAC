#include <iostream>
#include "C:\Users\Dhananjay\Desktop\CPP\7-Reusing classes\HomeWork\Address.cpp"
using namespace std;

class Customer
{
    cString name;
    Address addr;

public:
    Customer();
    Customer(const char *, int, const char *, const char *);
    void Display();
};

Customer::Customer() {}
Customer::Customer(const char *str, int p, const char *add, const char *city) : name(str), addr(p, add, city) {}

void Customer::Display()
{
    name.Display();
    cout << " ";
    addr.Display();
    cout << endl;
}

class RegCustomer : public Customer
{
    int reg_no;

public:
    RegCustomer();
    RegCustomer(int, const char *, int, const char *, const char *);
    void Display();
};

RegCustomer::RegCustomer() : reg_no(0) {}
RegCustomer::RegCustomer(int rno, const char *str, int p, const char *add, const char *city):reg_no(rno),Customer(str,p,add,city){}
void RegCustomer::Display()
{
    cout << "Reg. No.: " << reg_no << " ";
    Customer::Display();
    cout << endl;
}

int main()
{
    int c;
    cout << "Choose: " << endl;
    cout << "1. Customer" << endl;
    cout << "2. Reg Customer" << endl;
    cout << "Enter choice: ";
    cin >> c;
    cout << endl;
    switch (c)
    {
        case 1:
        {
            char nam[20]; char addr[20]; char city[20];
            int pincode;
            cout << "Enter name, address, city, pincode ";
            cin >> nam >> addr >> city >> pincode;
            Customer c1(nam,pincode,addr,city);
            c1.Display();
            break;
        }

        case 2:
        {
            int r; char nam[20]; char addr[20]; char city[20];
            int pincode;
            cout << "Enter reg id, name, address, city, pincode ";
            cin >> r >> nam >> addr >> city >> pincode;
            RegCustomer c2(r, nam,pincode,addr,city);
            c2.Display();
            break;
        }
    }
}