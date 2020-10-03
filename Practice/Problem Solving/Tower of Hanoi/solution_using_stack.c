#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

typedef struct Stack
{
    unsigned capacity;
    int top;
    int *arr;
} Stack;

Stack *CreateStack(unsigned capacity)
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->capacity = capacity;
    s->top = -1;
    s->arr = (int *)calloc(capacity, sizeof(int));

    return s;
}

int isFull(Stack *s)
{
    return s->top == s->capacity - 1;
}

int isEmpty(Stack *s)
{
    return s->top == -1;
}

void push(Stack *s, int ele)
{
    if (isFull(s))
    {
        //printf("Stack Overflow");
        return;
    }

    s->arr[++(s->top)] = ele;
}

int pop(Stack *s)
{
    if (isEmpty(s))
    {
        //printf("Stack Underflow.");
        return INT_MIN;
    }

    return s->arr[(s->top)--];
}

void moveDisk(char from, char to, int disk)
{
    printf("Move disk %d from %c to %c\n", disk, from, to);
}

void moveDiskBetweenPoles(Stack *src, Stack *dest, char s, char d)
{
    int pole1Top = pop(src);
    int pole2Top = pop(dest);

    if (pole1Top == INT_MIN)
    {
        push(src, pole2Top);
        moveDisk(d, s, pole2Top);
    }
    else if (pole2Top == INT_MIN)
    {
        push(dest, pole1Top);
        moveDisk(s, d, pole1Top);
    }
    else if (pole1Top > pole2Top)
    {
        push(src, pole1Top);
        push(src, pole2Top);
        moveDisk(d, s, pole2Top);
    }
    else
    {
        push(dest, pole1Top);
        push(dest, pole2Top);
        moveDisk(s, d, pole1Top);
    }
}

void tohIterative(int no, Stack *src, Stack *aux, Stack *dest)
{
    int i, tot_moves;
    char s = 'S', d = 'D', a = 'A';

    if (no % 2 == 0)
    {
        char temp = d;
        d = a;
        a = temp;
    }

    tot_moves = pow(2, no) - 1;

    for (i = no; i >= 1; i--)
        push(src, i);

    for (i = 1; i <= tot_moves; i++)
    {
        if (i % 3 == 1)
            moveDiskBetweenPoles(src, dest, s, d);
        else if (i % 3 == 2)
            moveDiskBetweenPoles(src, aux, s, a);
        else
            moveDiskBetweenPoles(aux, dest, a, d);
    }
}

int main()
{
    Stack *src, *aux, *dest;
    src = CreateStack(3);
    aux = CreateStack(3);
    dest = CreateStack(3);

    tohIterative(3, src, aux, dest);
    return 0;
}