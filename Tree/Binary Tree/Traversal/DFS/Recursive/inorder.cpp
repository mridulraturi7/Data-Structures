/*
    Implementation 4.

    Inorder Traversal of a Binary Tree.

    Inorder Traversal - Left, Root, Right.

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
    if(newNode == NULL)
    {
        cout<<"Memory Error!!";
        return NULL;
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
}

void inorder(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<"Inorder Traversal of the Binary Tree: ";
    inorder(root);

    return 0;
}