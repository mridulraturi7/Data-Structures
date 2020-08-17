/*
    Second Largest Element of an array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/second-largest/0
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
        int n, array[500], largest, secLargest;
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        largest = array[0];
        for(int i = 1; i < n; i++)
        {
            if(array[i] > largest)
            {
                largest = array[i];
            }
        }

        secLargest = 0;

        for(int i = 0 ; i < n; i++)
        {
            if(array[i] > secLargest && array[i] != largest)
            {
                secLargest = array[i];
            }
        }

        cout<<secLargest<<endl;
    }
    return 0;
}