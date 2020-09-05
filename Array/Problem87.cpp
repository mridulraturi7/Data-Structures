/*
    Minimum Difference among K.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/minimum-difference-among-k/0
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>

using namespace std;

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

        sort(array, array + n);
        int min = 1000001;

        for(int i = k; i <= n; i++)
        {
            int minValue = array[i - 1] - array[i - k];
            if(minValue < min)
            {
                min = minValue;
            }
        }

        cout<<min<<endl;
    }

    return 0;
}