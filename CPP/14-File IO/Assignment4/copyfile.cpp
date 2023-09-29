#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;
    ifstream fin("C:\\Users\\Dhananjay\\Desktop\\CPP\\File IO\\Assignment3\\Employee.cpp");
    ofstream fout("copy.cpp");
    while (!fin.eof())
    {
        ch = fin.get();
        if (!fin.eof())
        {
            fout << ch;
        }
    }
    fin.close();
    fout.close();

    ifstream fin2("copy.cpp");
    while (!fin2.eof())
    {
        ch = fin2.get();
        if (!fin2.eof())
        {
            cout << ch;
        }
    }
    fin2.close();
}