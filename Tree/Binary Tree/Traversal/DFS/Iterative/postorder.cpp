/*
    Postorder Traversal of a Binary Tree using Stack.
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

    stack<struct Node*> s1, s2;
    s1.push(root);

    while(s1.empty() == false)
    {
        struct Node *current = s1.top();
        s1.pop();

        s2.push(current);

        if(current->left != NULL)
        {
            s1.push(current->left);
        }

        if(current->right != NULL)
        {
            s1.push(current->right);
        }
    }

    while(s2.empty() == false)
    {
        struct Node *node = s2.top();
        s2.pop();

        cout<<node->data<<" ";
    }
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