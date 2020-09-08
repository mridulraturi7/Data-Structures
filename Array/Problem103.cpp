/*
    Sum of f(a[i], a[j]) over all pairs in an array of n integers.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sum-of-fai-aj-over-all-pairs-in-an-array-of-n-integers/0
    Difficulty - Basic
*/

#include<iostream>
#include<cstdlib>

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

        int sum = 0;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(abs(array[j] - array[i]) > 1)
                {
                    sum += (array[j] - array[i]);
                }
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}