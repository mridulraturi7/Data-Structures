/*
    Array Representation of a Binary Tree.
*/

#include<iostream>

using namespace std;

char tree[10];

void setRoot(char key)
{
    if(tree[0] != '\0')
    {
        cout<<"Tree already have root.";
    }
    else
    {
        tree[0] = key;
    }
}

void set_left_child(char key, int parent)
{
    if(tree[parent] == '\0')
    {
        cout<<"No Parent Found!!";
    }
    else
    {
        tree[(2 * parent) + 1] = key;
    }
}

void set_right_child(char key, int parent)
{
    if(tree[parent] == '\0')
    {
        cout<<"No Parent Found!!";
    }

    else
    {
        tree[(2 * parent) + 2] = key;
    }
}

void printTree()
{
    for(int i = 0; i < 10; i++)
    {
        if(tree[i] != '\0')
        {
            cout<<tree[i]<<" ";
        }
    }
}

int main()
{
    setRoot('A');
    set_left_child('B', 0);
    set_right_child('C', 0);

    set_left_child('D', 1);
    set_right_child('E', 1);

    set_right_child('F', 2);

    cout<<"Traversal of Binary Tree: ";
    printTree();

    return 0;
}