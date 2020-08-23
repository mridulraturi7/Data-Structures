/*
    Deleting a Linked List.

    The idea is to iterate through every node and delete each node one by one.
*/

#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

void printList(Node *n)
{

    if(n == NULL)
    {
        cout<<"Linked List is empty.";
    }

    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

void deleteLinkedList(Node **head_ref)
{
    Node *temp = *head_ref, *next_node;

    while(temp != NULL)
    {
        next_node = temp->next;
        delete temp;
        temp = next_node;
    }

    *head_ref = NULL;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout<<"Status of Linked List before deletion : ";
    printList(head);

    cout<<endl<<"Deleting..."<<endl;
    deleteLinkedList(&head);

    cout<<"Status of Linked List after deletion : ";
    printList(head);

    return 0;
}