/*
    Height or Maximum Depth of a Binary Tree.
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

int height(struct Node *node)
{
    if(node == NULL)
    {
        return 0;
    }

    else
    {
        int lheight = height(node->left);
        int rhieght = height(node->right);

        if(lheight > rhieght)
        {
            return lheight + 1;
        }

        else
        {
            return rhieght + 1;
        }   
    }
}

int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<"Height of the Binary Tree is: "<<height(root);

    return 0;
}