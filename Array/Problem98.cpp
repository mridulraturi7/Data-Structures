/*
    Shortest Un - ordered Subarray.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/shortest-un-ordered-subarray/0
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

        int count = 0;

        for(int i = 0; i < n - 2; i++)
        {
            if(array[i] < array[i + 1] && array[i + 1] > array[i + 2] || array[i] > array[i + 1] && array[i + 1] < array[i + 2])
            {
                count = 3;
                break;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}