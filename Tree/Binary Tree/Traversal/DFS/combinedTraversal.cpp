/*
    All the Depth First traversals in a single program.
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

void inorder(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

void preorder(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
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

    cout<<"Inorder Traversal of the Binary Tree: ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder Traversal of the Binary Tree: ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal of the Binary Tree: ";
    postorder(root);

    return 0;
}