/*
    Searching an element in Linked List (Recursive Approach).
    You are provided with a key, you have to write a function which returns true if the key is found in the Linked
    List, otherwise return false.
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
    if(n == NULL)
    {
        return false;
    }

    else if (n->data == value)
    {
        return true;
    }

    return searchElement(n->next, value);
}

int main()
{
    //Create a linked list as : head -> second -> third -> fourth -> fifth : 10 -> 20 -> 0 -> 50 -> 40

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();

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