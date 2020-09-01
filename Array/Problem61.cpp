/*
    Rotating an array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/reversal-algorithm/0
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
        int n, d;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>d;

        int *temp = new int[d];
        for(int i = 0; i < d; i++)
        {
            temp[i] = array[i];
        }

        for(int i = 0; i < n - d; i++)
        {
            array[i] = array[i + d];
        }

        int j = 0;
        for(int i = n - d; i < n; i++)
        {
            array[i] = temp[j++];
        }

        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
