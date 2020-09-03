/*
    Minimum Distance between two numbers.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>

using namespace std;

int minDistance(int array[], int n, int x, int y);

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

        int x, y;
        cin>>x>>y;

        cout<<minDistance(array, n, x, y)<<endl;
    }
}

int minDistance(int array[], int n, int x, int y)
{
    int minDistance = n, prev_index = -1;
    for(int i = 0; i < n; i++)
    {
        if(array[i] == x || array[i] == y)
        {
            if (prev_index != -1 && array[i] != array[prev_index])
            {
                minDistance = min(minDistance, i - prev_index);
            }
            prev_index = i;
        }
    }

    if(minDistance == n)
    {
        return -1;
    }

    return minDistance;
}