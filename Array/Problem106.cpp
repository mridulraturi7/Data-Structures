/*
    Find Number of Numbers.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/find-number-of-numbers/1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int num(int array[], int n, int k);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, k;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>k;

        cout<<num(array, n, k)<<endl;
    }

    return 0;
}

int num(int array[], int n, int k)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int x = array[i];

        if(x == k)
        {
            count++;
        }

        else
        {
            while(x != 0)
            {
                int digit = x % 10;
                if(digit == k)
                {
                    count++;
                }
                x = x / 10;
            }      
        }
    }
    
    return count;
}