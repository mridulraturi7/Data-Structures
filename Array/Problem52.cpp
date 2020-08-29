/*
    Removing duplicate elements from sorted array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int removeDuplicateElements(int array[], int n);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int size = removeDuplicateElements(array, n);

        for(int i = 0; i < size; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}

int removeDuplicateElements(int array[], int n)
{
    int *temp = new int[n];
    int j = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(array[i] != array[i + 1])
        {
            temp[j++] = array[i];
        }
    }

    temp[j++] = array[n - 1];

    for(int i = 0; i < j; i++)
    {
        array[i] = temp[i];
    } 
    
    return j;
}