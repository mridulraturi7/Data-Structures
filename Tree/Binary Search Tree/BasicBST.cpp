/*
    Construct the following Binary Search Tree:

                        8
                       / \
                     5     10
                    / \    / \
                   2   6  9   12

*/

#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->left);
}

int main()
{
    struct Node *root = new Node(8);
    /*
            Current Status:         8
                                   / \
                                NULL  NULL
    */

    root->left = new Node(5);
    root->right = new Node(10);
    /*
            Current Status:         8
                                   / \
                                 5     10
                               /  \    /  \ 
                            NULL NULL NULL NULL
    */

    root->left->left = new Node(2);
    root->left->right = new Node(6);
    /*
            Current Status:
                                    8
                                   / \
                                 5     10
                               /   \   /  \
                              2     6 NULL NULL
                             /       \
                          NULL      NULL 
    */

    root->right->left = new Node(9);
    root->right->right = new Node(12);
    /*
            Current Status:
                                    8
                                  /   \
                                5       10
                              /  \      /  \
                             2    6     9   12
                           /       \   /     \
                          NULL   NULL NULL  NULL 
    */

    cout<<"Inorder Traversal of the BST: ";
    inorder(root);

    return 0;
}