/*
    Pallindromic Array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1
    Difficulty - School
*/

#include<iostream>

using namespace std;

int checkPallindromeArray(int[], int n);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[20];
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cout<<checkPallindromeArray(array, n)<<endl;
    }

    return 0;
}

int checkPallindromeArray(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int remainder, reverseNum = 0, originalNum = array[i];
        while(array[i] != 0)
        {
            remainder = array[i] % 10;
            reverseNum = reverseNum * 10 + remainder;
            array[i] /= 10;
        }

        if(originalNum != reverseNum)
        {
            return 0;
        }
    }
    return 1;
}