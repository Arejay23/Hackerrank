#include <iostream>
using namespace std;

#define MAX 100

class Deque
{
    int arr[MAX];
    int front, rear, size;

public:
    Deque(int);

    void enQueFront(int);
    void enQueRear(int);
    void deQueFront();
    void deQueRear();

    bool isFull()
    {
        return ((front == 0 && rear == size - 1) || front == rear + 1);
    }

    bool isEmpty()
    {
        return front == -1;
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue underflow" << endl;
            return -1;
        }

        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue underflow" << endl;
            return -1;
        }

        return arr[rear];
    }
};

Deque ::Deque(int size)
{
    this->size = size;
    front = -1;
    rear = 0;
}

void Deque ::enQueFront(int x)
{
    if (isFull())
    {
        cout << "Queue overflow." << endl;
        return;
    }

    if (front == -1)
        front = rear = 0;
    else if (front == 0)
        front = size - 1;
    else
        front -= 1;

    arr[front] = x;
}

void Deque ::enQueRear(int x)
{
    if (isFull())
    {
        cout << "Queue overflow." << endl;
        return;
    }

    if (front == -1)
        front = rear = 0;
    else if (rear == size - 1)
        rear = 0;
    else
        rear += 1;

    arr[rear] = x;
}

void Deque ::deQueFront()
{
    if (isEmpty())
    {
        cout << "Queue underflow." << endl;
        return;
    }

    if (front == rear)
        front = rear = -1; //  Deque has only 1 element.
    else
    {
        if (front == size - 1)
            front = 0;
        else
            front += 1;
    }
}

void Deque ::deQueRear()
{
    if (isEmpty())
    {
        cout << "Queue underflow." << endl;
        return;
    }

    if (front == rear)
        front = rear = -1; //  Deque has only 1 element
    else
    {
        if (rear == 0)
            rear = size - 1;
        else
            rear -= 1;
    }
}

int main()
{
    Deque dq(5);

    cout << "Insert element at rear end  : 5 \n";
    dq.enQueRear(5);

    cout << "insert element at rear end : 10 \n";
    dq.enQueRear(10);

    cout << "get rear element "
         << " "
         << dq.getRear() << endl;

    dq.deQueRear();
    cout << "After delete rear element new rear"
         << " become " << dq.getRear() << endl;

    cout << "inserting element at front end \n";
    dq.enQueFront(15);

    cout << "get front element "
         << " "
         << dq.getFront() << endl;

    dq.deQueFront();

    cout << "After delete front element new "
         << "front become " << dq.getFront() << endl;
    return 0;
}
