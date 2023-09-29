#include <iostream>
#include <cstring> // Use <cstring> for C string functions like strcpy
using namespace std;

class Players
{
    int runs;
    char* name;
public:
    Players();
    ~Players(); // Add a destructor to free memory
    void display();
    void setPlayer();
    int getRuns();
    const char* getName();
    void setName(const char*);
};

int main()
{
    int i;
    Players *p = new Players[10];
    for (i = 0; i < 10; i++) // Use i < 10 instead of i <= 10
    {
        p[i].setName("World");
    }
    for (i = 0; i < 10; i++) // Use i < 10 instead of i <= 10
    {
        p[i].display();
    }

    // Don't forget to delete the dynamically allocated memory
    delete[] p;

    return 0;
}

Players::Players()
{
    char a[10] = "Hello";
    name = new char[strlen(a) + 1]; // Allocate memory for name
    strcpy(name, a);
}

Players::~Players()
{
    delete[] name; // Free the dynamically allocated memory
}

void Players::display()
{
    cout << "P: " << name << " R: " << runs << endl;
}

int Players::getRuns()
{
    return runs;
}

const char* Players::getName()
{
    return name;
}

void Players::setName(const char* n)
{
    delete[] name; // Free the existing memory
    name = new char[strlen(n) + 1]; // Allocate memory for the new name
    strcpy(name, n);
}
