/*
    Implementation 11.
    
    Inorder Traversal of a Binary Tree using Stack (Iterative).
*/

#include<iostream>
#include<stack>

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

void inorder(struct Node *root)
{
    //Check if the binary tree is empty.
    if(root == NULL)
    {
        return;
    }

    stack<struct Node*> s;
    struct Node *current = root;

    //Traversal will be done until current becomes NULL and the stack gets empty.
    while(current != NULL || s.empty() == false)
    {
        //Visit ti the left most node of the current node.
        while(current != NULL)
        {
            s.push(current);
            current = current->left;
        }

        //current will be NULL here
        current = s.top();
        s.pop();

        cout<<current->data<<" ";

        //Now visit the right subtree
        current = current->right;
    }
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

    return 0;
}