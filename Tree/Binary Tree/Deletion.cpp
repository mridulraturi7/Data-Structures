/*
    Implementation 3.

    Deletion in a Binary Tree.

    Given a binary tree and a key, delete the node with given key making sure that the tree shrinks from the
    bottom, i.e., the deleted node must be replaced by the bottom most and right most node.
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
    struct Node* newNode = new Node();
    if(newNode == NULL)
    {
        cout<<"Memory Error!!";
        return NULL;
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void deleteLastNode(struct Node *root, struct Node *last_node)
{
    queue<struct Node*> q;
    q.push(root);

    while(!q.empty())
    {
        struct Node *temp = q.front();
        q.pop();

        if(temp == last_node)
        {
            temp = NULL;
            delete last_node;
            return;
        }

        if(temp->left != NULL)
        {
            if(temp->left == last_node)
            {
                temp->left = NULL;
                delete last_node;
                return;
            }
            else
            {
                q.push(temp->left);
            }
        }

        if(temp->right != NULL)
        {
            if(temp->right == last_node)
            {
                temp->right = NULL;
                delete last_node;
                return;
            }
            else
            {
                q.push(temp->right);
            }
        }
    }
}

Node* deleteNode(struct Node* root, int data)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(root->left == NULL && root->right == NULL)
    {
        if(root->data == data)
        {
            return NULL;
        }
        else
        {
            return root;
        }
    }

    queue<struct Node*> q;
    q.push(root);

    struct Node *last_node;
    struct Node *node_to_delete = NULL;

    while(!q.empty())
    {
        last_node = q.front();
        q.pop();

        if(last_node->data == data)
        {
            node_to_delete = last_node;
        }

        if(last_node->left != NULL)
        {
            q.push(last_node->left);
        }

        if(last_node->right != NULL)
        {
            q.push(last_node->right);
        }
    }

    if(node_to_delete != NULL)
    {
        int key = last_node->data;
        deleteLastNode(root, last_node);
        node_to_delete->data = key;
    }

    return root;
}

void inorder(struct Node* temp)
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
    struct Node *root = createNode(10);
    root->left = createNode(11);
    root->right = createNode(9);

    root->left->left = createNode(7);
    root->right->left = createNode(15);
    root->right->right = createNode(8);

    cout<<"Current Inorder Tree Traversal: ";
    inorder(root);
    cout<<endl;

    int key;
    cout<<"Enter the node key to be deleted: ";
    cin>>key;

    root = deleteNode(root, key);

    cout<<"Inorder Tree Traversal after deletion: ";
    inorder(root);

    return 0;
}