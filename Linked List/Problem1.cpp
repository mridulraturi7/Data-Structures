/*
    A sample program to create a linked list with 3 nodes and then traverse it.
    A linked list is a linear data structure in which elements are not stored at contiguous memory locations.
*/

#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node *next; //Self Referencing Pointer - A pointer that points to whatever it is a part of.
};

void printList(Node *n);

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    //allocate nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;  //Link first node with the second node.
    
    second->data = 2;
    second->next = third;  //Link second node with the third node. 

    third->data = 3;
    third-> next = NULL;  //third node is the last node.

    printList(head);

    return 0;
}

//Print contents of linked list starting from the given node.
void printList(Node *n)
{
    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}