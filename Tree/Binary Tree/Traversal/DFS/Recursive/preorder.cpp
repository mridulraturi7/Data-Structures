/*
    Implementation 5.

    Preorder Traversal of a Binary Tree.

    Preorder Traversal - Root, Left, Right.

    Time Complexity - O(n) , n is the number of nodes.
    Space Complexity - O(n) , n is the number of nodes.
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

void preorder(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}

int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<"Preorder Traversal of the Binary Tree: ";
    preorder(root);

    return 0;
}