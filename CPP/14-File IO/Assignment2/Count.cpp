#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;
    int charCount = 0;
    int spaceCount = 0;
    int nlCount = 0;
    int dCount = 0;
    char s = ' ';
    char n = '\n';
    ifstream fin("C:\\Users\\Dhananjay\\Desktop\\CPP\\Exception Handling\\Assignment1\\Accounts.cpp");
    while (fin)
    {
        ch = fin.get();
        if (ch == s)
        {
            spaceCount++;
        }
        if (ch == n)
        {
            nlCount++;
        }
        if (ch >= 48 && ch <= 57)
        {
            dCount++;
        }
        charCount++;
    }
    fin.close();
    cout << "Char count: " << charCount << endl;
    cout << "Space count: " << spaceCount << endl;
    cout << "Newline count: " << nlCount << endl;
    cout << "Digits count: " << dCount << endl;
}