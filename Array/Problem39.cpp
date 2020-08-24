/*
    Binary Array Sorting
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/binary-array-sorting/0
    Difficulty - Basic
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        vector<int> vec(n);
        for(int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }

        int start = 0, end = n - 1;
        while(start < end)
        {
            if(vec[start] == 0)
            {
                start++;
                continue;
            }

            if(vec[end] == 1)
            {
                end--;
                continue;
            }

            vec[start++] = 0;
            vec[end--] = 1;
        }

        for(int i = 0; i < n; i++)
        {
            cout<<vec[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}