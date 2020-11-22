/*
    Preorder Traversal of a Binary Tree using Stack (Iterative).
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

void preorder(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }

    stack<struct Node*> s;
    s.push(root);

    while(s.empty() == false)
    {
        struct Node *current = s.top();
        s.pop();

        cout<<current->data<<" ";

        if(current->right != NULL)
        {
            s.push(current->right);
        }

        if(current->left != NULL)
        {
            s.push(current->left);
        }
    }
}

int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<"Preorder Traversal of the Binary Tree: ";
    preorder(root);

    return 0;
}