/*
    Surpasser Count.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/surpasser-count/0
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

        for(int i = 0; i < n; i++)
        {
            int count = 0;
            for(int j = i + 1; j < n; j++)
            {
                if(array[j] > array[i])
                {
                    ++count;
                }
            }
            cout<<count<<" ";
        }

        cout<<endl;
    }

    return 0;
}