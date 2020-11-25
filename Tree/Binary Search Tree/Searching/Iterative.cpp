/*
    Implementation 2.

    Searching in Binary Search Tree : Iterative Approach.

    Time Complexity: O(h), where h is the height of BST.
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

Node* search(struct Node *root, int key)
{
    struct Node *current = root;

    

    while(current->data != key)
    {
        //If the node is found break the loop.
        if(current->data == key)
        {
            break;
        }

        //If the key is lesser than current node's data then search in the left subtree.
        else if(current->data > key)
        {
            current = current->left;
        }

        //Else search in the right subtree.
        else
        {
            current = current->right;
        }

        //If we have reached end of the tree heightwise(node is not found), we return NULL.
        if(current == NULL)
        {
            return NULL;
        }
    }

    return current;
}

int main()
{
    struct Node *root = createNode(8);
    root->left = createNode(5);
    root->right= createNode(10);

    root->left->left = createNode(2);
    root->left->right = createNode(6);

    root->right->left = createNode(9);
    root->right->right = createNode(12);

    int key;
    cout<<"Enter the key of the node to search: ";
    cin>>key;

    struct Node* result = search(root, key);

    if(result == NULL)
    {
        cout<<"Node with key "<<key<<" is not present in the BST.";
    }

    else
    {
        cout<<"Node with key "<<key<<" is present in the BST.";
    }

    return 0;
}