/*
    Searching in Binary Search Tree : Recursive Approach.
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

Node* search(struct Node* root, int key)
{
    //If root is NULL or root is the node to be searched, then return root.
    if(root == NULL || root->data == key)
    {
        return root;
    }

    //If key is lesser than current node's data, then search in left subtree.
    if(root->data > key)
    {
        return search(root->left, key);
    }

    //Else search in the right subtree.
    return search(root->right, key);
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
    cout<<"Enter the key of the node to search: ";
    cin>>key;

    struct Node *result = search(root, key);

    if(!result)
    {
        cout<<"Node with key "<<key<<" is not present in the BST.";
    }

    else
    {
        cout<<"Node with key "<<key<<" is present in the BST.";
    }

    return 0;
}