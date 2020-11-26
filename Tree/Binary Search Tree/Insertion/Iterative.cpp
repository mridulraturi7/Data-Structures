/*
    Implementation 4.

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
    //If the tree is empty, make the new node as root node.
    if(root == NULL)
    {
        root = createNode(key);
        return root;
    }

    struct Node* current = root;
    struct Node *prev_node;     //prev_node will store the parent of the node to be inserted.

    //This loop is used to find the parent of the node to be inserted.
    while(current != NULL)
    {
        prev_node = current;

        //If the key is less than current node's key, then move to the left subtree.
        if(current->data > key)
        {
            current = current->left;
        }

        //If the key is greater than current node's key, then move to the right subtree.
        else if(current->data < key)
        {
            current = current->right;
        }
    }

    //If the key of the node to be inserted is less than its parent key, insert it as left child.
    if(key < prev_node->data)
    {
        prev_node->left = createNode(key);
    }

    //Else if the key of the node to be inserted is greater than its parent key, insert it as right child.
    else if(key > prev_node->data)
    {
        prev_node->right = createNode(key);
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
    struct Node *root = createNode(8);
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