#include <stdio.h>
#include <stdlib.h>

typedef struct EBT
{
    int weight;
    struct EBT *left, *right;
} EBT;

typedef struct EList
{
    struct EList *next;
    EBT *tree;
} EList;

void swapMet(EList *a, EList *b);
void insertAtTheBegin(EList **start_ref, int data);
void bubbleSort(EList *start);
void printList(EList *start);

void insertAtBegin(EList **head_ref, int weight, EBT *left, EBT *right)
{
    EList *temp = (EList *)malloc(sizeof(EList));
    temp->tree->weight = weight;
    temp->tree->left = left;
    temp->tree->right = right;
    temp->next = (*head_ref);
    (*head_ref) = temp;
}

void bubbleSort(EList *start)
{
    int swapped, i;
    EList *ptr1, *lptr = NULL;

    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr)
        {

            if (ptr1->tree->weight > ptr1->next->tree->weight)
            {

                swapMet(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

void swapMet(EList *a, EList *b)
{

    int temp = a->tree->weight;
    a->tree->weight = b->tree->weight;
    b->tree->weight = temp;
}

void printList(EList *start)
{

    EList *temp = start;
    printf("\n");
    while (temp != NULL)
    {

        printf("%d ", temp->tree->weight);
        temp = temp->next;
    }
}

int main()
{

    int arr[] = {12, 56, 2, 11, 1, 90};
    int list_size, i;

    EList *start = NULL;

    for (i = 0; i < 6; i++)
        insertAtBegin(&start, arr[i], NULL, NULL);

    printf("\n Linked list before sorting ");
    printList(start);

    bubbleSort(start);

    printf("\n Linked list after sorting ");
    printList(start);

    return 0;
}