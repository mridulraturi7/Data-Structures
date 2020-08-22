/*
    Deleting a node in a linked list.
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
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<endl;
}

void deleteNode(Node **head_ref, int key)
{
    Node *temp = *head_ref, *previous_node;

    //Check if the node to be deleted is the head node
    if(temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    //Traverse to the node till we find the key to be deleted
    while(temp != NULL && temp->data != key)
    {   
        previous_node = temp;
        temp = temp->next;
    }

    //If key was not present in linked list.
    if(temp == NULL)
    {
        cout<<"Node with key "<<key<<" is not present in linked list"<<endl;
        return;
    }

    //Modify the next of the previous node.
    previous_node->next = temp->next;

    //free the memory of node to be deleted
    delete temp;
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

    cout<<"Initially, status of the linked list is: ";
    printList(head);

    int key;

    cout<<"Enter the node(key) to be deleted: ";
    cin>>key;

    deleteNode(&head, key);

    cout<<"Status after deleting node with key "<<key<<": ";
    printList(head);

    return 0;
}