#include <iostream>
#include <climits>
using namespace std;

typedef struct CircularQueue
{
    int rear;
    int front;

    int size;
    int *arr;

    CircularQueue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }

    void enQue(int);
    int deQue();
    void displayQueue();
} Queue;

void CircularQueue ::enQue(int x)
{
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
    {
        cout << "Queue is full!";
        return;
    }
    else if (front == -1)
    {
        front = rear = 0;
        arr[rear] = x;
    }
    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
        arr[rear] = x;
    }
    else
        arr[++rear] = x;
}

int CircularQueue ::deQue()
{
    if (front == -1)
    {
        cout << "Queue is empty.";
        return INT_MIN;
    }

    int data = arr[front];
    arr[front] = -1;

    if (front == rear)
        front = rear = -1;
    else if (front == size - 1)
        front = 0;
    else
        front++;

    return data;
}

void CircularQueue ::displayQueue()
{
    if (front == -1)
    {
        cout << "Queue is empty";
        return;
    }

    cout << "Elements in the circular queue are : " << endl;
    if (rear >= front)
        for (int i = front; i <= rear; i++)
            cout << arr[i] << endl;
    else
    {
        for (int i = front; i < size; i++)
            cout << arr[i] << endl;

        for (int i = 0; i <= rear; i++)
            cout << arr[i] << endl;
    }
}

int main()
{
    CircularQueue q(5);

    q.enQue(14);
    q.enQue(22);
    q.enQue(13);
    q.enQue(-6);

    q.displayQueue();
    return 0;
}