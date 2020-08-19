/*
    Rotate an array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int main()
{
    long long testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        long long n, d, input[100000], temp[100000];
        cin>>n>>d;

        for(long long i = 0 ; i < n; i++)
        {
            cin>>input[i];
        }

        for(long long i = 0; i < d; i++)
        {
            temp[i] = input[i];
        }

        for(long long i = 0; i < n - d; i++)
        {
            input[i] = input[i + d];
        }

        long long j = 0;
        for(long long i = n - d; i < n; i++)
        {
            input[i] = temp[j];
            j++;
        }

        for(long long i = 0; i < n; i++)
        {
            cout<<input[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

