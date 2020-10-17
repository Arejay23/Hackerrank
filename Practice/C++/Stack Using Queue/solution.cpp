#include <iostream>
#include <queue>
#include <climits>
using namespace std;

// STACK USING 2 QUEUES

class StackUsingDoubleQueue
{
    queue<int> q1, q2;
    int top;

public:
    void push(int);
    int pop();

    int peek()
    {
        return top;
    }
};

void StackUsingDoubleQueue ::push(int x)
{ // Complexity : O(n)
    q2.push(x);
    top = x;

    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
}

int StackUsingDoubleQueue ::pop()
{ // Complexity : O(1)
    int x = top;
    q1.pop();
    top = q1.front();

    return x;
}

//STACK USING SINGLE QUEUE

class StackUsingSingleQueue
{
    queue<int> q;
    int top;

public:
    void push(int);
    int pop();

    int peek()
    {
        return top;
    }
};

void StackUsingSingleQueue ::push(int x)
{
    int s = q.size();

    q.push(x);
    top = x;

    for (int i = 0; i < s; i++)
    {
        q.push(q.front());
        q.pop();
    }
}

int StackUsingSingleQueue ::pop()
{
    if (!q.empty())
    {
        int x = q.front();
        q.pop();
        top = q.front();
        return x;
    }
    else
    {
        return INT_MIN;
    }
}

// MAIN DRIVER CODE

int main()
{

    //STACK USING DOUBLE QUEUE

    StackUsingDoubleQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.pop() << endl;
    cout << q.peek() << endl;

    //STACK USING SINGLE QUEUE

    StackUsingSingleQueue q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    cout << q1.pop() << endl;
    cout << q1.peek() << endl;

    return 0;
}