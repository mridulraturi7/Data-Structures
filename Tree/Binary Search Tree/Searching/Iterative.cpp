/*
    Searching in Binary Search Tree : Iterative Approach.
*/

#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

Node* createNode(int data)
{
    struct Node *newNode = new Node();
    if(!newNode)
    {
        cout<<"Memory Error!!";
        return NULL;
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
}

Node* search(struct Node *root, int key)
{
    struct Node *current = root;

    if(current == NULL)
    {
        return NULL;
    }

    if(current->data == key)
    {
        return current;
    }

    while(current->data != key)
    {
        if(current == NULL)
        {
            return NULL;
        }

        if(current->data == key)
        {
            break;
        }

        else if(current->data > key)
        {
            current = current->left;
        }

        else
        {
            current = current->right;
        }
    }

    return current;
}

int main()
{
    struct Node *root = createNode(8);
    root->left = createNode(5);
    root->right= createNode(10);

    root->left->left = createNode(2);
    root->left->right = createNode(6);

    root->right->left = createNode(9);
    root->right->right = createNode(12);

    int key;
    cout<<"Enter the key of the node to search: ";
    cin>>key;

    struct Node* result = search(root, key);

    if(result == NULL)
    {
        cout<<"Node with "<<key<<" is not present in the BST.";
    }

    else
    {
        cout<<"Node with "<<key<<" is present in the BST.";
    }

    return 0;
}