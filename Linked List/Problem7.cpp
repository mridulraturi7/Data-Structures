/*
    Length of a Linked List (Recursive Approach).
    Find the number of nodes in a linked list.
    This is a menu driven program which facilitates user to insert elements at end in the linked list as calculate the 
    length of the linked list as it grows.
*/

#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

void insertAtEnding(Node **head_ref, int new_data)
{
    Node *last = *head_ref, *new_node;

    //ALlocate memory to new node
    new_node = new Node();

    //Put data in the new node
    new_node->data = new_data;

    //Since we have to insert node at end so make the next of new_node as NULL
    new_node->next = NULL;

    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    //Else traverse to the end of the linked list
    while(last->next != NULL)
    {
        last = last->next;
    }

    //Modify the next of the last node
    last->next = new_node; 
}

void printList(Node *n)
{
    if(n == NULL)
    {
        cout<<"Linked List is Empty"<<endl;
        return;
    }

    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

int findLength(Node *n)
{
    if(n == NULL)
        return 0;

    return 1 + findLength(n->next);
}

int main()
{
    Node *head = NULL;

    int choice;

    do
    {
        cout<<endl<<"Menu: "<<endl;
        cout<<"Enter 1 to insert nodes in Linked List."<<endl;
        cout<<"Enter 2 to display status of Linked List."<<endl;
        cout<<"Enter 3 to find the lenght of the Linked List."<<endl;
        cout<<"Enter 4 to exit."<<endl;
        cin>>choice;

        switch (choice)
        {
            int data;
        case 1:
                cout<<"Enter data: ";
                cin>>data;
                insertAtEnding(&head, data);
                break;

        case 2: 
                cout<<"Status of Linked List is: ";
                printList(head);
                break;

        case 3:
                cout<<"Length of the Linked List is: "<<findLength(head);
                break;

        case 4:
                exit(0);
        
        default: 
                cout<<"Wrong Choice"<<endl;
                break;
        }
    } while (choice != 4);

    return 0;
}