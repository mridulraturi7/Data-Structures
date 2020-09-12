/*
    Find the closest number.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/find-the-closest-number/0
    Difficulty - Basic
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int findClosestNumber(int array[], int n, int k);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, k;
        cin>>n>>k;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cout<<findClosestNumber(array, n, k)<<endl;
    }

    return 0;
}

int findClosestNumber(int array[], int n, int k)
{
    int left = 0, right = n - 1;
    int difference= 100000, nearestValue;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        int diff = abs(array[mid] - k);

        if(diff < difference)
        {
            difference = diff;
            nearestValue = array[mid];
        }

        else if(diff == difference)
        {
            nearestValue = array[mid] > k ? array[mid] : nearestValue;
        }

        if(array[mid] == k)
        {
            return array[mid];
        }

        else if(array[mid] < k)
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }

    return nearestValue;
}