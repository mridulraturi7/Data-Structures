/*
    Delete a node from a Binary Search Tree.
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

Node* findInorderSuccessor(struct Node *node)
{
    struct Node *current = node;

    while(current != NULL && current->left != NULL)
    {
        current = current->left;
    }

    return current;
}

Node* deleteNode(struct Node *root, int key)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(root->data > key)
    {
        root->left = deleteNode(root->left, key);
    }

    else if(root->data < key)
    {
        root->right = deleteNode(root->right, key);
    }

    else
    {
        //If the node has only right child
        if(root->left == NULL)
        {
            struct Node* temp = root->right;
            delete root;
            return temp;
        }

        //If the node has only right child
        else if(root->right == NULL)
        {
            struct Node* temp = root->left;
            delete root;
            return temp;
        }

        //Else if both child are present
        struct Node *inorder_successor = findInorderSuccessor(root->right);

        //Copy the content of inorder_successor to the node to delete
        root->data = inorder_successor->data;

        //Delete the inorder_successor
        root->right = deleteNode(root->right, inorder_successor->data);
    }

    return root;
}

void inorder(struct Node *node)
{
    if(!node)
    {
        return;
    }

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
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

    cout<<"Inorder Traversal before deletion: ";
    inorder(root);
    cout<<endl;

    int key;
    cout<<"Enter the node's key to delete from the BST: ";
    cin>>key;

    root = deleteNode(root, key);

    cout<<"Inorder Traversal after deleting the node: ";
    inorder(root);
    return 0;
}