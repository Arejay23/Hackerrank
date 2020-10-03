#include <iostream>

using namespace std;

class TwoStack
{
    int *arr;
    int size;
    int top1, top2;

public:
    TwoStack(int n)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)
        { // Check if atleast one space is available!
            arr[++(top1)] = x;
        }
        else
        {
            cout << "Overflow.";
        }
    }

    void push2(int x)
    {
        if (top1 < top2 - 1)
        { // Check if atleast one space is available!
            arr[--(top2)] = x;
        }
        else
        {
            cout << "Overflow.";
        }
    }

    int pop1()
    {
        if (top1 >= 0)
            return arr[top1--];
    }

    int pop2()
    {
        if (top2 < size)
            return arr[top2++];
    }
};

int main()
{
    TwoStack s(5);

    //Push Pop in both stacks.
    //A total of 5 elements in both stacks can be stored.

    return 0;
}