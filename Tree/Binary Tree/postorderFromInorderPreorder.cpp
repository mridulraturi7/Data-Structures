/*
    Find the postorder traversal of a binary tree given its inorder and preorder traversal.
*/

#include<iostream>
#include<map>

using namespace std;

int preIndex = 0;

void printPostOrder(int inOrder[], int preOrder[], int inStart, int inEnd, map<int, int> hash)
{
    if(inStart > inEnd)
    {
        return;
    }

    int inRoot = hash[preOrder[preIndex++]];

    printPostOrder(inOrder, preOrder, inStart, inRoot - 1, hash);

    printPostOrder(inOrder, preOrder, inRoot + 1, inEnd, hash);

    cout<<inOrder[inRoot]<<" ";
}

void postOrderTraversal(int inOrder[], int preOrder[], int n)
{
    map<int, int> hash;
    for(int i = 0; i < n; i++)
    {
        hash[inOrder[i]] = i;
    }

    printPostOrder(inOrder, preOrder, 0, n - 1, hash);
}

int main()
{
    int inOrder[] = {4, 2, 5, 1, 3, 6};
    int preOrder[] = {1, 2, 4, 5, 3, 6};

    int n = sizeof(inOrder)/sizeof(inOrder[0]);

    postOrderTraversal(inOrder, preOrder, n);

    return 0;
}