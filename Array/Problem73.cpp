/*
    Absolute Distinct Count.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1
    Difficulty - Basic
*/

#include<iostream>
#include<unordered_map>
#include<cstdlib>

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

        unordered_map<int, int> hash;
        for(int i = 0; i < n; i++)
        {
            hash[abs(array[i])]++;
        }

        int count = 0;

        for(auto i : hash)
        {
            count++;
        }

        cout<<count<<endl;
    }
    
    return 0;
}