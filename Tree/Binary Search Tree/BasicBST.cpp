/*
    Construct the following Binary Search Tree:
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

int main()
{
    struct Node *root = new Node(8);

    root->left = new Node(5);
    root->right = new Node(10);

    root->left->left = new Node(2);
    root->left->right = new Node(6);

    root->right->left = new Node(9);
    root->right->right = new Node(12);

    return 0;
}