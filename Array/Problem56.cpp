/*
    Check if two arrays are equal or not.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not/0
    Difficulty - Basic
*/

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        long long *array1 = new long long[n];
        long long *array2 = new long long[n];
        
        for(int i = 0; i < n; i++)
        {
            cin>>array1[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin>>array2[i];
        }

        unordered_map<int, int> hash;

        for(int i = 0; i < n; i++)
        {
            hash[array1[i]]++;
        }

        int isEqual = 1;
        
        for(int i = 0; i < n; i++)
        {
            hash[array2[i]]--;
        }

        for(auto i : hash)
        {
            if(i.second != 0)
            {
                isEqual = 0;
                break;
            }
        }

        cout<<isEqual<<endl;

    }

    return 0;
}