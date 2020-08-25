/*
    Length of a Linked List (Iterative Approach).
    Find the number of nodes in a linked list.
    This is a menu driven program which facilitates user to insert elements at beginning in the linked list as 
    calculate the length of the linked list as it grows.
*/

#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

void insertAtBeginning(Node **head_ref, int new_data)
{
    //Allocate memory to the new node in heap
    Node *new_node = new Node();

    //Put in the data
    new_node->data = new_data;

    //Modify the next of the new node
    new_node->next = *head_ref;

    //Make new_node the head node
    *head_ref = new_node;
}

void printList(Node *n)
{
    //If the list is empty
    if(n == NULL)
    {
        cout<<"Linked List is Empty."<<endl;
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
    int length = 0;

    while(n != NULL)
    {
        length++;;
        n = n->next;
    }

    return length;
}

int main()
{
    //Start with the empty list.
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
                insertAtBeginning(&head, data);
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