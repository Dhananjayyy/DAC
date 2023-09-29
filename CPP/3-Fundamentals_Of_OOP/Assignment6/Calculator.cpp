// Dhananjay Yelwande
// PRN: 230943020025

/* Assignment 6
Write Calculator class with two data members no1 and no2
Write member function Accept to accept values, and Display to display values
Write member functions Addition, Subtraction, Multiplication and Division
*/

#include <iostream>
using namespace std;

class Calculator
{
    int no1, no2;
    public:
    void Accept(int, int);
    void Display();
    int Addition();
    int Subtraction();
    int Multiplication();
    int Division();
};

int main()
{
    int a, b, c;
    bool run = true;
    Calculator C;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    C.Accept(a,b);   
    do
    {
        cout << "------------" << endl;;
        C.Display();
        cout << "Choose: " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtration" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter choice: ";
        cin >> c;
        cout << "------------" << endl;
        switch(c)
        {
            case 1:
            {
                cout << "The addition is: " << C.Addition() << endl;
                break;
            }
            case 2:
            {
                cout << "The subtraction is: " << C.Subtraction() << endl;
                break;
            }
            case 3:
            {
                cout << "The multiplication is: " << C.Multiplication() << endl;
                break;
            }
            case 4:
            {
                cout << "The division is: " << C.Division() << endl;
                break;
            }
            case 5:
            {
                run = false;
                cout << "Quit" << endl;
                break;
            }
            default:
            {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    while(run);
}

void Calculator::Accept(int a, int b)
{
    no1 = a;
    no2 = b;
}

void Calculator::Display()
{
    cout << "Numbers: " << no1 << " and " << no2 << endl;
}

int Calculator::Addition()
{
    return no1 + no2;
}

int Calculator::Subtraction()
{
    return no1 - no2;
}

int Calculator::Multiplication()
{
    return no1 * no2;
}

int Calculator::Division()
{
    return no1 / no2;
}