/*
    Friendly Array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/friendly-array/0
    Difficulty - Basic
*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

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

        int friendliness = 0;
        
        sort(array, array + n);
        
        friendliness += abs(array[0] - array[1]);
        
        for(int i = 1; i < n - 1; i++)
        {
            if(abs(array[i] - array[i - 1]) < abs(array[i] - array[i + 1]))
            {
                friendliness += abs(array[i] - array[i - 1]);
            }
            
            else
            {
                friendliness += abs(array[i] - array[i + 1]);
            }
        }
        
        friendliness += abs(array[n - 1] - array[n - 2]);

        cout<<friendliness<<endl;
    }

    return 0;
}