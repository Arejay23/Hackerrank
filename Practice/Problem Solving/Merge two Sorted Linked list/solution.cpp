#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    //At any time i will have 2 linked lists
    SinglyLinkedListNode* head = nullptr;
    SinglyLinkedListNode* p = nullptr; //head of merged linked list
    if(head1 == nullptr){
        return head2;
    }else if(head2 == nullptr){
        return head1;
    }else{
        while(1){
        if(head1 -> data <= head2 -> data){
            if(head == nullptr){
                head = head1;
                p = head;
                head1 = head1 -> next;
            }else{
                head ->next = head1;
                head1 = head1 -> next;
                head = head -> next;
            }
            if(head1 == nullptr){//if list 1 ends
                head -> next = head2;
                return p;
            }
            
        }else if( head2 -> data <= head1 ->data){
            if(head==nullptr){
                head = head2;
                p = head;
                head2 = head2 -> next;
            }else{
                head ->next = head2;
                head2 = head2 -> next;
                head = head -> next;
            }
            if(head2 == nullptr){// if list 2 ends
                head -> next = head1;
                return p;
            }
        }}
    }
    return p;
}

int main()