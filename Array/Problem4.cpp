/*
    Largest element of an array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/largest-element-in-array/0
    Difficulty - School
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while (testCase-- != 0)
    {
        int n, array[100], max;
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        max = array[0];

        for(int  i = 1; i < n; i++)
        {
            if(array[i] > max)
            {
                max = array[i];
            }
        }

        cout<<max<<endl;
    }
    
    return 0;
}