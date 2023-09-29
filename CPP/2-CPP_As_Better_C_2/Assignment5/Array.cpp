// Accept, Display, Find Max Min, Search element, Count even odd with one function and print in main (use references)

#include <iostream>
using namespace std;

void accept(int[], int);
void display(int[], int);
int getMax(int[], int);
int getMin(int[], int);
int search(int[], int, int);
void getEvenOdd(int[], int, int &, int &);

int main()
{
    int size, i, choice;
    cout << "Enter array size: ";
    cin >> size;
    int *arr = new int[size];
    accept(arr,size);
    display(arr,size);
    
    bool quit = false;
    while(!quit)
    {
        cout << "----------------" << endl;
        cout << "Choose: " << endl;
        cout << "1. Get Max and Min element" << endl;
        cout << "2. Search an element" << endl;
        cout << "3. Count Even and Odd elements" << endl;
        cout << "4. Quit" << endl;
        cout << "----------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Max element is: " << getMax(arr,size) << endl;
                cout << "Min element is: " << getMin(arr,size) << endl;
                break;
            }

            case 2:
            {
                int element;
                cout << "Enter the element you want to search: ";
                cin >> element;
                if (search(arr,size,element) == true)
                {
                    cout << "Element " << element << " found!" << endl;
                }
                else
                {
                    cout << "Element " << element << " not found." << endl;
                }           
                break;
            }

            case 3:
            {
                int a = 0,b = 0;
                getEvenOdd(arr,size,a,b);
                cout << "Even count: " << a << endl << "Odd count: " << b << endl;
                break;
            }

            case 4:
            {
                quit = true;
                cout << "Quit" << endl;
                break;
            }

            default:
            {
                cout << "Invalid input" << endl;
                break;
            }
        }
    }
}

void accept(int a[], int s)
{
    int i = 0;
    cout << "Enter "<< s << " elements: ";
    for (i; i<s; i++)
    {
        cin >> a[i];
    }
}

void display(int a[], int s)
{
    int i=0;
    cout << "Your Array: ";
    for (i; i<s;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int getMax(int a[], int s)
{
    int max = a[0];
    for (int i=1;i<s;i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int getMin(int a[], int s)
{
    int min = a[0];
    for (int i=1;i<s;i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int search(int a[], int s, int e)
{
    for (int i = 0; i < s; i++)
    {
        if (a[i] == e)
        {
            return true;
        }
    }

    return false;
}

void getEvenOdd(int a[],int s,int &x, int &y)
{
    for (int i = 0; i < s; i++)
    {
        if (a[i] % 2 == 0)
        {
            x++;
        }

        if (a[i] % 2 != 0)
        {
            y++;
        }
    }
}