/*
    Alternate Elements of an array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sum-of-series/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while (testCase-- != 0)
    {
        int n, array[100001];
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i += 2)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}