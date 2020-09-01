/*
    Elements in the Range.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/elements-in-the-range/0
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
        int n, a, b;
        cin>>n>>a>>b;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(array[i] >= a && array[i] <= b)
            {
                count++;
            }
        }

        if(count == (b - a) + 1)
        {
            cout<<"Yes"<<endl;
        }

        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}