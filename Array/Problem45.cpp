/*
    Pendulum Arrangement of an Array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/print-an-array-in-pendulum-arrangement/0
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
        int *output = new int[n];
 
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        sort(array, array + n);

        int mid;

        if((n % 2) == 0)
        {
            mid = (n - 1)/2;
        }

        else
        {
            mid = n/2;
        }

        output[mid] = array[0];

        int right = mid, left = mid;

        for(int i = 1; i < n; i++)
        {
            if((i%2) != 0)
            {
                output[++right] = array[i]; 
            }

            else
            {
                output[--left] = array[i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout<<output[i]<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}