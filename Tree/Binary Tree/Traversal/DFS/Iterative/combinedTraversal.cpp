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

        if(current->right)
        {
            s.push(current->right);
        }

        if(current->left)
        {
            s.push(current->left);
        }
    }
}

void postorderUsingTwoStacks(struct Node *root)
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

        if(current->left)
        {
            s1.push(current->left);
        }

        if(current->right)
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

    cout<<"Inorder Traversal of the Binary Tree: ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder Traversal of the Binary Tree: ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal of the Binary Tree using two stacks: ";
    postorderUsingTwoStacks(root);
    cout<<endl;

    return 0;
}