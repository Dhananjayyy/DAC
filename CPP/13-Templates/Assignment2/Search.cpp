#include <iostream>
using namespace std;

template <class T>

bool Search(T arr[], int size, T key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    //int arr[5] = {1, 2, 3, 4, 5};
    char arr[5] = {'a','b','c','d','e'};
    char k = 'z';
    cout << Search(arr, 5, k);
}

