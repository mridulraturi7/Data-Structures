/*
    Sum of Series.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sum-of-series/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, sum = 0;
        cin>>n;

        sum = (n * (n + 1)) / 2;

        cout<<sum<<endl;
    }
    return 0;
}