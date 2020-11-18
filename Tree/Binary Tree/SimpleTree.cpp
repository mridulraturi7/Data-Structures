/*
    Create a simple binary tree as following:
                    
                    1
                   / \
                  /   \
                 2     3
                /
               /
              4

    A tree whose elements have at most 2 children is called a binary tree.
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
    /*
        Current Status:
                            1
                           / \
                        NULL  NULL
    */

    root->left = new Node(2);
    root->right = new Node(3);
    /*
        Current Status:
                            1
                           / \
                          2   3
                         / \ / \
                       NU NU NU NU
                       LL LL LL LL
    */

    root->left->left = new Node(4);
    /*
        Current Status:
                            1
                           / \
                          2   3
                         / \ / \
                        4 NU NU NU
                       /\LL LL LL
                      NU NU
                      LL LL
    */

    return 0;
}