/*
    Check whether a tree is symmetric or not.
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
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
}

bool checkSymmetric(struct Node *root)
{
    if(root == NULL)
    {
        return true;
    }

    queue<struct Node*> q;

    struct Node *leftNode, *rightNode;

    q.push(root->left);
    q.push(root->right);

    while(q.empty() == false)
    {
        leftNode = q.front();
        q.pop();

        rightNode = q.front();
        q.pop();

        if(leftNode->data != rightNode->data)
        {
            return false;
        }

        if(leftNode->left != NULL && rightNode->right != NULL)
        {
            q.push(leftNode->left);
            q.push(rightNode->right);
        }

        else if((leftNode->left == NULL && rightNode->right != NULL) || (leftNode->left != NULL && rightNode->right == NULL))
        {
            return false;
        }
        
        if(leftNode->right != NULL && rightNode->left != NULL)
        {
            q.push(leftNode->right);
            q.push(rightNode->left);
        }

        else if((leftNode->right == NULL && rightNode->left != NULL) || (leftNode->right != NULL && rightNode->left == NULL))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(2);

    root->left->left = createNode(3);
    root->left->right = createNode(4);

    root->right->left = createNode(4);
    root->right->right = createNode(3);

    bool isSymmetric = checkSymmetric(root);
    
    if(isSymmetric)
    {
        cout<<"The tree is symmetric.";
    }
    else
    {
        cout<<"The tree is not symmetric.";
    }

    return 0;
}