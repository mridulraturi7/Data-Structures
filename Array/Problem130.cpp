/*
    Equalization of an array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/equalization-of-an-array/0
    Difficulty - Basic
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int calculateOperations(int array[], int n);

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

        int res = calculateOperations(array, n);

        cout<<res<<endl;
    }

    return 0;
}

int calculateOperations(int array[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    if((sum % n) != 0)
    {
        return -1;
    }

    int eq = sum / n, sum_diff = 0;

    for(int i = 0; i < n; i++)
    {
        sum_diff += abs(array[i] - eq);
    }

    return sum_diff / 2;
}