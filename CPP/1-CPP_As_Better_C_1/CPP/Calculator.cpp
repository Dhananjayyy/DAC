#include <iostream>
using namespace std;
int main()
{
    int num1,num2,ch;
    cout << "Enter two numbers" << endl;
    cout << "Number 1 = ";
    cin >> num1;
    cout << "Number 2 = ";
    cin >> num2;
    cout << endl;
    cout << "Choose: \n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter choice: ";
    cin >> ch;
    switch(ch)
    {
        case 1:
        {
            cout << "The addition is" << num1+num2;
            break;
        }
        case 2:
        {
            cout << "The subtraction is" << num1-num2;
            break;
        }
        case 3:
        {
            cout << "The multiplication is" << num1*num2;
            break;
        }
        case 4:
        {
            cout << "The division is" << num1/num2;
            break;
        }
    }
}