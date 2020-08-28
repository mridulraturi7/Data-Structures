/*
    Find the odd occurrence.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/find-the-odd-occurence/0
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
        int n;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int max = *max_element(array, array + n);
        
        int *hash = new int[max + 1];
        for(int i = 0; i < n; i++)
        {
            hash[array[i]]++;
        }

        int oddOc = 0;

        for(int i = 0; i < max + 1; i++)
        {
            if((hash[i]%2) != 0)
            {
                oddOc = i;
            }
        }

        cout<<oddOc<<endl;
    }

    return 0;
}