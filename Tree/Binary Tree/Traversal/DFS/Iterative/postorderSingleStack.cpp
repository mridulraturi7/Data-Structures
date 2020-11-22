/*
    Postorder Traversal of a Binary Tree using single stack.
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

void postOrder(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }

    stack<struct Node*> s;
    struct Node *current = root;

    do
    {
        while(current != NULL)
        {
            if(current->right)
            {
                s.push(current->right);
            }
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();

        if(s.empty() == false && current->right == s.top())
        {
            s.pop();
            s.push(current);
            current = current->right;
        }

        else
        {
            cout<<current->data<<" ";
            current = NULL;
        }
    }while(s.empty() == false);
}

int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<"Postorder Traversal of the Binary Tree: ";
    postOrder(root);

    return 0;
}