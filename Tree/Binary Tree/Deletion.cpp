/*
    Implementation 3.
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
    struct Node* newNode = new Node();
    if(newNode == NULL)
    {
        cout<<"Memory Error!!";
        return NULL;
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int main()
{
    struct Node* root = createNode(10);
    root->left = createNode(11);
    root->right = createNode(9);

    root->left->left = createNode(7);
    root->right->left = createNode(15);
    root->right->right = createNode(8);

    cout<<"Current Inorder Tree Traversal: ";
    inorder(root);
    cout<<endl;

    int key;
    cout<<"Enter the node key to be deleted: ";
    cin>>key;

    root = deleteNode(root, key);

    cout<<"Inorder Tree Traversal after deletion: ";
    inorder(root);

    return 0;
}