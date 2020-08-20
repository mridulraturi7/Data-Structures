/*
    Maximum in struct array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/maximum-in-struct-array/1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

struct Height
{
    int feet;
    int inches;
};

int findMax(Height arr[], int n);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, fe, in;
        cin>>n;

        Height arr[100000];

        for(int i = 0; i < n; i++)
        {
            cin>>fe>>in;
            arr[i] = {fe, in};
        }

        int res = findMax(arr, n);
        cout<<res<<endl;
    }

    return 0;
}

int findMax(Height arr[], int n)
{
    int height[100000];
    for(int i = 0; i < n; i++)
    {
        height[i] = ((arr[i].feet * 12) + arr[i].inches);
    }

    int maxHeight = height[0];

    for(int i = 1; i < n; i++)
    {
        if(height[i] > maxHeight)
        {
            maxHeight = height[i];
        }
    }

    return maxHeight;
}