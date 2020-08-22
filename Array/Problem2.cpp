/*
    Multiply Array Elements.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/multiply-array/0
    Difficulty - School
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[10], product = 1;

        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i++)
        {
            product *= array[i];
        }

        cout<<product<<endl;
    }
    return 0;
}