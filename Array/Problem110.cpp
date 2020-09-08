/*
    First Come First Serve.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/first-come-first-serve/0
    Difficulty - Basic
*/

#include<iostream>
#include<unordered_map>

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

        unordered_map<int, int> hash;

        for(int i = 0; i < n; i++)
        {
            hash[array[i]]++;
        }

        int found = -1;

        for(int i = 0; i < n; i++)
        {
            if(hash[array[i]] == k)
            {
                found = 1;
                cout<<array[i]<<endl;
                break;
            }
        }

        if(found == -1)
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}