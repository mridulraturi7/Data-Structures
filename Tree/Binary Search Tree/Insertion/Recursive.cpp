/*
    Implementation 5.

    Insert a node in a Binary Search Tree.

    Time Complexity - O(h), where h is the height of the BST.
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

Node* insert(struct Node *root, int key)
{
    if(root == NULL)
    {
        root = createNode(key);
        return root;
    }

    if(root->data > key)
    {
        root->left = insert(root->left, key);
    }

    else if(root->data < key)
    {
        root->right = insert(root->right, key);
    }

    return root;
}

void inorder(struct Node *node)
{
    if(node == NULL)
    {
        return;
    }

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

int main()
{
    struct Node* root = createNode(8);
    root->left = createNode(5);
    root->right = createNode(10);

    root->left->left = createNode(2);
    root->left->right = createNode(6);

    root->right->left = createNode(9);
    root->right->right = createNode(12);

    cout<<"Inorder Traversal before inserting new node: ";
    inorder(root);
    cout<<endl;

    int key;
    cout<<"Enter node's key to insert in the BST: ";
    cin>>key;

    root = insert(root, key);

    cout<<"Inorder Traversal after inserting new node: ";
    inorder(root);

    return 0;   
}