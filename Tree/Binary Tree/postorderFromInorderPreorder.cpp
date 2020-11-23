/*
    Implementation 18.

    Find the postorder traversal of a binary tree given its inorder and preorder traversal.

    A direct approach would be to first construct the binary tree based on the InOrder and PreOrder Traversal.
    And then print the postorder traversal recursively.

    But we can print the postorder without constructing the tree using following algorithm.

    Algorithm:
        Create a hashmap of nodes and their positions in inOrder Traversal (Perform Hashing).
        The first node of the PreOrder will be the root node of the tree.
        Check its position in hashmap.
        The nodes in the left of the root will be left subtree. Traverse recursively the left subtree of the root node.
        The nodes in the right of the root will be right subtree. Traverse recursively the right subtree of the root node.

    Time Complexity - O(n);

    Space Complexity - O(n);
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

    //Traverse Left Subtree.
    printPostOrder(inOrder, preOrder, inStart, inRoot - 1, hash);

    //Traverse Right Subtree.
    printPostOrder(inOrder, preOrder, inRoot + 1, inEnd, hash);

    //Print the root node.
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