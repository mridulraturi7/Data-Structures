/*
    Balanced Array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/balanced-array/0
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

        int mid = n / 2;
        int left_sum = 0, right_sum = 0;
        for(int i = 0; i < mid; i++)
        {
            left_sum += array[i];
        }

        for(int i = mid; i < n; i++)
        {
            right_sum += array[i];
        }

        if(left_sum > right_sum)
        {
            cout<<left_sum - right_sum<<endl;
        }

        else
        {
            cout<<right_sum - left_sum<<endl;
        }
    }

    return 0;
}