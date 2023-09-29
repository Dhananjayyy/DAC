#include <iostream>
#include <fstream>
using namespace std;

#include <iostream>
#include <fstream>
using namespace std;

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("Alphabets.txt");
    while (fout)
    {
        int i;
        for (i = 65; i <= 90; i++)
        {
            fout << char(i) << " ";
        }
        break;
    }
    fout.close();

    ifstream fin("Alphabets.txt");
    char ch;
    while (fin)
    {
        ch = fin.get();
        cout << ch;
    }
    fin.close();
}