/*
    Level Order Traversal of a Binary Tree.
*/

#include<iostream>
#include<queue>

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

void levelOrder(struct Node *node)
{
    if(node == NULL)
    {
        return;
    }

    queue<struct Node*> q;
    q.push(node);

    struct Node *temp;

    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        cout<<temp->data<<" ";

        if(temp->left != NULL)
        {
            q.push(temp->left);
        }

        if(temp->right != NULL)
        {
            q.push(temp->right);
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

    cout<<"Level Order Traversal of the Binary Tree: ";
    levelOrder(root);

    return 0;
}