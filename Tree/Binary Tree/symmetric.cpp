/*
    Symmetric Tree (Mirror Image of itself).
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
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
}

bool isMirror(struct Node *root1, struct Node *root2)
{
    if(root1 == NULL && root2 == NULL)
    {
        return true;
    }

    if(root1->data == root2->data)
    {
        return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
    }

    return false;
}

bool checkSymmetric(struct Node *root)
{
    return isMirror(root, root);
}

int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(2);

    root->left->left = createNode(3);
    root->left->right = createNode(4);

    root->right->left = createNode(4);
    root->right->right = createNode(3);

    bool isSymmetric = checkSymmetric(root);
    
    if(isSymmetric)
    {
        cout<<"The tree is symmetric.";
    }
    else
    {
        cout<<"The tree is not symmetric.";
    }
    
    return 0;
}