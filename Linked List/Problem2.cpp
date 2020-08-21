/*
    Insertion in a linked list.
    We are given a linked list with 3 nodes.
    This is a menu driven program where you can perform insertion operation in following ways:
        a: At the beginning of the node.
        b: After a node.
        c: At the end of the list. 
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
    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n-> next;
    }
}

void insertAtBeginning(Node **head_ref, int new_data)
{
    //Allocate new node in the heap
    Node *new_node = new Node();

    //Put in the data
    new_node->data = new_data;

    //Make next of new node as head
    new_node->next = (*head_ref);

    //Move the head to point to the new node
    *head_ref = new_node;
}

void insertAfterNode(Node *n, int new_data, int nodeNumber)
{
    int count = 0;
    Node *prev_node = NULL;
    while(n != NULL)
    {
        count++;

        if(count == nodeNumber)
        {
            prev_node = n;
            break;
        }

        n = n->next;
    }

    //Check if the prev_node is null
    if(prev_node == NULL)
    {
        cout<<"Previous Node can not be null. Enter a valid node number";
        return;
    }

    //Allocate new node in heap
    Node *new_node = new Node();

    //Put the data in new node
    new_node->data = new_data;

    //Make next of new node as the next of prev node 
    new_node->next = prev_node->next;

    //Make new node as the next of prev node
    prev_node->next = new_node;
}

void insertAtEnd(Node **head_ref, int new_data)
{
    //Allocate new node in the heap
    Node *new_node = new Node();

    Node *last = (*head_ref);

    //Put the data in the new node
    new_node->data = new_data;

    //Make the next of new node as NULL
    new_node->next = NULL;

    //Check if the linked list is empty, then make the new node as head
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    //Else traverse through the list to move to the last node
    while(last->next != NULL)
    {
        last = last->next;
    }

    //Make the next of last node as the new node
    last->next = new_node;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    //Allocate nodes in the heap memory
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    int choice;

    do
    {
        cout<<endl;
        cout<<"Menu:"<<endl;
        cout<<"Enter 0 to display the status of linked list"<<endl;
        cout<<"Enter 1 to insert element at the beginning of the linked list."<<endl;
        cout<<"Enter 2 to insert an element after a node"<<endl;
        cout<<"Enter 3 to insert an element at the end of the node"<<endl;
        cout<<"Enter 4 to exit the program"<<endl;

        cin>>choice;

        switch(choice)
        {
            int data, nodeNum;
            case 0 : printList(head);
                    break;

            case 1 : cout<<"Enter data : "<<endl;
                    cin>>data;
                    insertAtBeginning(&head, data);
                    break;

            case 2 : cout<<"Enter data : "<<endl;
                    cin>>data;
                    cout<<"Enter the node number after which you want to insert new node : "<<endl;
                    cin>>nodeNum;
                    insertAfterNode(head, data, nodeNum);
                    break;

            case 3 : cout<<"Enter data : "<<endl;
                    cin>>data;
                    insertAtEnd(&head, data);
                    break;

            case 4 : exit(0);

            default : cout<<"Wrong Operation";
        }

    } while(choice != 4);

    return 0;
}