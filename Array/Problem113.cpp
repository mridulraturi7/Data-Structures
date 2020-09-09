/*
    Count Pair SUm.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/count-pair-sum/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int m, n, x;
        cin>>m>>n;

        int *array1 = new int[m];
        int *array2 = new int[n];
        for(int i = 0; i < m; i++)
        {
            cin>>array1[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin>>array2[i];
        }

        cin>>x;

        int count = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(array1[i] + array2[j] == x)
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;
}