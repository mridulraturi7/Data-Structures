/*
    Pair array product sum.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/pair-array-product-sum/0
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

        int count = 0;

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if((array[i] + array[j]) < (array[i] * array[j]))
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;

    }

    return 0;
}