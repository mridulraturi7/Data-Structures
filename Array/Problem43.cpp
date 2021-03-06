/*
    Index of first 1 in a sorted array of 0's and 1's.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/index-of-first-1-in-a-sorted-array-of-0s-and-1s/0
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
        long n;
        cin>>n;

        int *v = new int[n];

        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int index = -1;

        for(int i = 0; i < n; i++)
        {
            if(v[i] == 1)
            {
                index = i;
                break;
            }
        }

        cout<<index<<endl;
    }

    return 0;
}