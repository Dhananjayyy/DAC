#include <iostream>
using namespace std;

class cQueue {
    int front, rear, size;
    int *arr;
public:
    cQueue();
    cQueue(int);
    void Enqueue(int);
    int Dequeue();
    void Display();
};

cQueue::cQueue() {
    size = 3;
    front = rear = -1;
    arr = new int[size];
}

cQueue::cQueue(int size) {
    front = rear = -1;
    this->size = size;
    arr = new int[size];
}

void cQueue::Enqueue(int element) {
    if (rear == size - 1) {
        cout << "Queue is full. Cannot enqueue." << endl;
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    arr[rear] = element;
    cout << element << " Enqueued" << endl;
}

int cQueue::Dequeue() {
    if (front == -1) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return -1; // Return a sentinel value to indicate an error.
    }
    int element = arr[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
    return element;
}

void cQueue::Display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue: ";
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    bool loop = true;
    int size;
    int ch;
    cout << "Enter Queue size: ";
    cin >> size;
    cQueue q1(size);
    do {
        cout << "Choose: " << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
            case 1: {
                int e;
                cout << "Enter element: ";
                cin >> e;
                q1.Enqueue(e);
                break;
            }
            case 2: {
                int d = q1.Dequeue();
                if (d != -1) {
                    cout << d << " Dequeued" << endl;
                }
                break;
            }
            case 3: {
                q1.Display();
                break;
            }
            case 0: {
                loop = false;
            }
        }
    } while (loop);
    return 0;
}
