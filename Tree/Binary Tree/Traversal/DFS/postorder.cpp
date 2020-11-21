/*
    Implementation 6.

    Postorder Traversal of a Binary Tree.

    Postorder Traversal - Left, Right, Root.

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
        cout<<"Memory Error";
        return NULL;
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
}

void postorder(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}

int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<"Postorder Traversal of the Binary Tree: ";
    postorder(root);

    return 0;
}