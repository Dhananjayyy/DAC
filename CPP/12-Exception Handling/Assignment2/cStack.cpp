#include <iostream>
using namespace std;

class OverFlow : public exception
{
public:
    const char *what()
    {
        return "Stack Overflow!";
    }
};

class UnderFlow : public exception
{
public:
    const char *what()
    {
        return "Stack Underflow!";
    }
};

class cStack
{
    int size;
    int top;
    int *arr;

public:
    cStack();
    cStack(int);
    void Push(int);
    int Pop();
    void Display();
};

int main()
{
    int ch, size;
    cout << "Enter size of stack: ";
    cin >> size;
    cStack s(size);

    do
    {
        cout << "Chose Stack operations: " << endl;
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
            try
            {
                int n;
                cout << "Enter element to Push: ";
                cin >> n;
                s.Push(n);
            }
            catch (OverFlow o)
            {
                cout << o.what() << endl;
            }
            break;
        }
        case 2:
        {
            try
            {
                cout << s.Pop() << endl;
            }
            catch (UnderFlow u)
            {
                cout << u.what() << endl;
            }

            break;
        }
        case 3:
        {
            s.Display();
        }
        }
    } while (ch != 0);
}

cStack::cStack()
{
    size = 3;
    top = -1;
    arr = new int[size];
};

cStack::cStack(int size)
{
    top = -1;
    this->size = size;
    arr = new int[this->size];
}

void cStack::Push(int p)
{
    if (top == size - 1)
    {
        throw OverFlow();
    }
    else
    {
        top++;
        arr[top] = p;
    }
}

int cStack::Pop()
{
    if (top < 0)
    {
        throw UnderFlow();
        return 0;
    }
    else
    {
        int n = arr[top];
        top--;
        return n;
    }
}

void cStack::Display()
{
    for (int i = top; i >= 0; i--)
    {
        // cout << "top value: " << top << "::";
        cout << arr[i] << endl;
    }
}