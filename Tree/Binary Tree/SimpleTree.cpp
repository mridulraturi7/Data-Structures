/*
    Create a simple binary tree as following:
                    
                    1
                   / \
                  /   \
                 2     3
                /
               /
              4
*/

#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    //Create root node.
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);

    return 0;
}