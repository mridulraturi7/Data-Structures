/*
    Remove duplicates from unsorted array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/remove-duplicates-from-unsorted-array/0
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
            hash[array[i]] = 1;
        }

        for(int i = 0; i < n; i++)
        {
            if(hash[array[i]] == 1)
            {
                cout<<array[i]<<" ";
                hash[array[i]] = 0;
            }
        }

        cout<<endl;
    }

    return 0;
}