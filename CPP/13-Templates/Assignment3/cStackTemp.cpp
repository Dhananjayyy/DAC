#include <iostream>
using namespace std;

template <class T>

class cStack
{
    int top, size;
    T *arr;

public:
    cStack()
    {
        size = 3;
        top = -1;
        arr = new int[size];
    };

    cStack(int size)
    {
        top = -1;
        arr = new int[size];
    };

    void Push(int no)
    {
        top++;
        arr[top] = no;
    };

    int Pop()
    {
        int n = arr[top];
        top--;
        return n;
    };

    void Display()
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    };
};

int main()
{
    bool loop = true;
    int size;
    int ch;
    cout << "Enter Stack size: ";
    cin >> size;
    cStack<int> s1(size);
    do
    {
        cout << "Choose: " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int e;
            cout << "Enter element: ";
            cin >> e;
            s1.Push(e);
            cout << e << " Pushed" << endl;
            break;
        }

        case 2:
        {
            int p;
            p = s1.Pop();
            cout << p << " Popped" << endl;
            break;
        }

        case 3:
        {
            cout << "Stack: " << endl;
            s1.Display();
            break;
        }

        case 0:
        {
            loop = false;
        }
        }
    } while (loop);
}
