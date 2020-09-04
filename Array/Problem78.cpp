/*
    Maximum Repeating Number.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/maximum-repeating-number/0
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

        int *hash = new int[k] ();
        for(int i = 0; i < n; i++)
        {
            ++hash[array[i]];
        }

        int most_frequent = *max_element(hash, hash + k);
        
        for(int i = 0; i < k; i++)
        {
            if(hash[i] == most_frequent)
            {
                cout<<i;
                break;
            }
        }

        cout<<endl;
    }

    return 0;
}