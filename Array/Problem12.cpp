/*
    Swap kth elements.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/swap-kth-elements/0
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
        int n, array[500], k, kthBegin, kthEnd;
        cin>>n>>k;

        for(int i = 0 ; i < n; i++)
        {
            cin>>array[i];
        }

        kthBegin = array[k-1];
        kthEnd = array[n-k];

        array[k-1] = kthEnd;
        array[n-k] = kthBegin;

        for(int i = 0 ; i < n; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}