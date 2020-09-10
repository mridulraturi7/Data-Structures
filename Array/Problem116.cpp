/*
    Cyclically rotate an array by one.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int *array = new int[n];
        int *output = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int last_element = array[n - 1];
        for(int i = 0; i < n - 1; i++)
        {
            output[i + 1] = array[i];
        }

        output[0] = last_element;

        for(int i = 0; i < n; i++)
        {
            cout<<output[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}