/*
    Swap kth elements.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/swap-kth-elements/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[500], k;
        cin>>n>>k;

        for(int i = 0 ; i < n; i++)
        {
            cin>>array[i];
        }

        array[k-1] = array[k-1] + array[n-k];
        array[n-k] = array[k-1] - array[n-k];
        array[k-1] = array[k-1] - array[n-k];

        for(int i = 0 ; i < n; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}