/*
    Sherlock a detective
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sherlock-a-detective/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while (testCase-- != 0)
    {
        int n;
        cin>>n;

        int v1[100000];
        int v2[100000] = { 0 };
        for(int i = 0; i < n; i++)
        {
            cin>>v1[i];
        }

        for(int i = 1; i < n; i++)
        {
            v2[v1[i] - 1] = 1;
        }

        for(int i = 0; i < n; i++)
        {
            if(v2[i] == 0)
            {
                cout<<i + 1<<" ";
            }
        }

        cout<<endl;
    }
    
    return 0;
}