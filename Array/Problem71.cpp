/*
    Minimum number to form the sum even.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/minimum-number-to-form-the-sum-even/0
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

        long sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += array[i];
        }

        if(sum%2 == 0)
        {
            cout<<"2";
        }

        else
        {
            cout<<"1";
        }

        cout<<endl;
        
    }

    return 0;
}