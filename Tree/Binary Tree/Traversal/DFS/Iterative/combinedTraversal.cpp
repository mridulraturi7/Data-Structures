/*
    Implementation 15.

    All the tree traversals in a single program. 
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

Node *createNode(int data)
{
    struct Node *newNode = new Node();
    if(!newNode)
    {
        cout<<"Memory Error!!";
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
}

void inorder(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }

    stack<struct Node*> s;

    struct Node *current = root;

    while(current != NULL || s.empty() == false)
    {
        while(current != NULL)
        {
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();

        cout<<current->data<<" ";

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
    cout<<endl;

    return 0;
}