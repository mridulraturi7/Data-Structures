/*
    Sort first half in ascending and second half in descending.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sort-first-half-in-ascending-and-second-half-in-descending/0
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
        int n;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        sort(array, array + n);

        int mid = (n / 2) - 1;

        sort(array + (mid + 1), array + n, greater<int>());

        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}