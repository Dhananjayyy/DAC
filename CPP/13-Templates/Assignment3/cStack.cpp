#include <iostream>
using namespace std;

class cStack
{
    int top, size;
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
    bool loop=true;
    int size;
    int ch;
    cout << "Enter Stack size: ";
    cin >> size;
    cStack s1(size);
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

cStack::cStack()
{
    size=3;
    top=-1;
    arr = new int[size];
}

cStack::cStack(int size)
{
    top=-1;
    arr = new int[size];
}

void cStack::Push(int no)
{
    top++;
    arr[top] = no;
}

int cStack::Pop()
{
    int n = arr[top];
    top--;
    return n;
}

void cStack::Display()
{
    int i;
    for (i=top;i>=0;i--)
    {
        cout << arr[i] << endl;
    }
}

