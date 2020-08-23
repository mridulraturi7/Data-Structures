/*
    Deleting a node at a given position. Take Head Position = 0.
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
        n = n->next;
    }
}

void deleteNode(Node **head_ref, int position)
{
    Node *temp = *head_ref, *previous_node;

    //Check if the node to be deleted is the head node
    if(temp != NULL && position == 0)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    int count = 0;

    //Else find te previous node of the node to be deleted.
    while(temp != NULL)
    {
        previous_node = temp;
        temp = temp->next;

        count++;

        if(count == position)
        {
            break;
        }
    }

    //Check if the position is more than number of nodes.
    if(temp == NULL)
    {
        cout<<"Element is not in the Linked List. Enter valid position.";
        return;
    }

    //Modify the next of previous node
    previous_node->next = temp->next;

    //Free the memory allocated to the node to be deleted.
    delete temp;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second  = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout<<"Current Status of the Linked List is: ";
    printList(head);

    int position;

    cout<<endl;

    cout<<"Enter the position of the node to be deleted: ";
    cin>>position;

    deleteNode(&head, position);

    cout<<endl;

    cout<<"Status of Linked List after deleting node at "<<position<<" position: ";
    printList(head);

    return 0;
}