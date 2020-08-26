/*
    Searching an element in Linked List (Iterative Approach).
*/

#include<iostream>

using namespace std;

class Node
{
    public: 
        int data;
        Node *next;
};

bool searchElement(Node *n, int value)
{
    while(n != NULL)
    {
        if(n->data == value)
        {
            return true;
        }
        n = n->next;
    }

    return false;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    Node *fifth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 0;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = fifth;

    fifth->data = 40;
    fifth->next = NULL;

    int key;

    cout<<"Enter the element to search in the linked list: ";
    cin>>key;

    bool res = searchElement(head, key);

    if(res == true)
    {
        cout<<"Element is found";
    }

    else
    {
        cout<<"Element is not found";
    }

    return 0;
}