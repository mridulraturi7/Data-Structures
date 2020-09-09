/*
    Average Count Array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/average-count-array/0
    Difficulty - Basic
*/

#include<iostream>
#include<cmath>

using namespace std;

int checkNumber(int array[], int n, int avg);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, x;
        cin>>n>>x;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i++)
        {
            int avg = floor((array[i] + x) / 2);
            int present = checkNumber(array, n, avg);
            cout<<present<<" ";
        }

        cout<<endl;
    }

    return 0;
}

int checkNumber(int array[], int n, int avg)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(array[i] == avg)
        {
            count++;
        }
    }

    return count;
}