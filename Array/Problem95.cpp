/*
    Reverse array in groups.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, k;
        cin>>n>>k;

        long *array = new long[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i += k)
        {
            int l = i;
            int r = (i + k < n) ? i + (k - 1) : n - 1;
            while(l < r)
            {
                swap(array[l], array[r]);
                l++;
                r--;
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}