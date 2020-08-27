/*
    Get nth node from Linked List (Iterative Approach).
    You are given a linked list, you have to write a function that returns the nth node from the linked list.
    Assume indexing starts from 0.
*/

#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

int getNthNode(Node *n, int index)
{
    int count = 0;

    while(n != NULL)
    {
        if(count == index)
        {
            return n->data;
        }
        n = n->next;
        count++;
    }

    return -1;
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = NULL;

    int index;

    cout<<"Enter the index of the element: ";
    cin>>index;

    int res = getNthNode(head, index);

    (res == -1) ? cout<<"Invalid Index" : cout<<"Element at "<<index<<" index: "<<res;

    return 0;
}