/*
    Check if an array is sorted?
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted/0
    Difficulty - School
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while (testCase-- != 0)
    {
        int n, array[500], flag = 1;
        cin>>n;
        
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0 ; i < n - 1; i++)
        {
            if(array[i] < array[i+1])
            {
                flag = 0;
                break;
            }
        }
        cout<<flag<<endl;
    }
    
    return 0;
}