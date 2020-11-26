/*
    Insert a node in a Binary Search Tree.
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

void insert(struct Node *root, int key)
{
    if(root == NULL)
    {
        root = createNode(key);
        return;
    }

    struct Node* current = root;
    struct Node *prev_node;

    while(current != NULL)
    {
        prev_node = current;

        if(current->data > key)
        {
            current = current->left;
        }

        else if(current->data < key)
        {
            current = current->right;
        }
    }

    if(key < prev_node->data)
    {
        prev_node->left = createNode(key);
    }

    else if(key > prev_node->data)
    {
        prev_node->right = createNode(key);
    }
}

int main()
{
    struct Node *root = createNode(8);
    root->left = createNode(5);
    root->right = createNode(10);
    
    root->left->left = createNode(2);
    root->left->right = createNode(6);

    root->right->left = createNode(9);
    root->right->right = createNode(12);

    int key;
    cout<<"Enter node's key to insert in the BST: ";
    cin>>key;

    insert(root, key);

    return 0;
}