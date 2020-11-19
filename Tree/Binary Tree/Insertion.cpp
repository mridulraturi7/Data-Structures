/*
    Insertion in a Binary Tree.

    Given a binary tree and a key, insert the key into the tree at the first position available in level order.
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
    Node *newNode = new Node();
    if(!newNode)
    {
        cout<<"Memory Error!!"<<endl;
        return NULL;
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node* insertNode(Node *root, int data)
{
    if(root == NULL)
    {
        root = createNode(data);
        return root;
    }

    queue<struct Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if(temp->left != NULL)
        {
            q.push(temp->left);
        }
        else
        {
            temp->left = createNode(data);
            return root;
        }

        if(temp->right != NULL)
        {
            q.push(temp->right);
        }
        else
        {
            temp->right = createNode(data);
            return root;
        }
    }
}

void inorder(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }
    
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

int main()
{
    Node *root = createNode(10);
    root->left = createNode(11);
    root->left->left = createNode(7);

    root->right = createNode(9);
    root->right->left = createNode(15);
    root->right->right = createNode(8);

    cout<<"Inorder Traversal Before Insertion: ";
    inorder(root);
    cout<<endl;

    int key;
    cout<<"Enter node key to insert: ";
    cin>>key;

    root = insertNode(root, key);

    cout<<"Inorder Traversal After Inertion: ";
    inorder(root);

    return 0;
}