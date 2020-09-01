/*
    Sum Triangle for given array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sum-triangle-for-given-array/0
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

        int o_size = (n*(n+1))/2;

        int *array = new int[n];
        int *output = new int[o_size];

        int o = o_size;
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
            output[o - n] = array[i];
            o++;
        }

        int size = n;

        for(int i = n - 1; i >= 0; i--)
        {
            o = o_size;
            n = n - 1;
            size += n;
            for(int j = 0; j < n; j++)
            {
                array[j] = array[j] + array[j + 1];
                output[o - size] = array[j];
                o++;
            }
            
        }

        for(int i= 0; i < o_size; i++)
        {
            cout<<output[i]<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}