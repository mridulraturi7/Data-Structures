/*
    K Largest Elements.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/k-largest-elements/0
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
        int n,k;
        cin>>n>>k;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        sort(array, array + n);

        for(int i = 1; i <= k; i++)
        {
            cout<<array[n - i]<<" ";
        }

        cout<<endl;

    }

    return 0;
}
