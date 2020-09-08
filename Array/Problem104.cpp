/*
    Sum of distinct elements for a limited range.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sum-of-distinct-elements-1/0
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
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int *hash = new int[n + 1] ();
        for(int i = 0; i < n; i++)
        {
            hash[array[i]] = 1;
        }

        long sum = 0;
        for(int i = 0; i <= n; i++)
        {
            if(hash[i] == 1)
            {
                sum += i;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}