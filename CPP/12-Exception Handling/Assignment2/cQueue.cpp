#include <iostream>
using namespace std;

class cQueue
{
private:
    int position, front, back, size;
    int *arr;

public:
    cQueue();
    cQueue(int);
    void enQueue(int);
    int deQueue();
    void Display();
};

int main()
{
    cQueue c1;
    c1.enQueue(2);
    c1.enQueue(4);
    c1.enQueue(6);
    c1.Display();
    // cout << "deQueued: " << c1.deQueue() << endl;
    // c1.Display();
    return 0;
}
cQueue::cQueue()
{
    front = -1;
    this->size = 3;
    back = this->size - 1;
    arr = new int[this->size];
}
cQueue::cQueue(int size)
{
    front = -1;
    this->size = size;
    back = this->size - 1;
    arr = new int[this->size];
}
void cQueue::enQueue(int e)
{
    back--;
    arr[back] = e;
}
int cQueue::deQueue()
{
    front++;
    int n = arr[back];
    return n;
}

void cQueue::Display()
{
    for (int i = front; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
