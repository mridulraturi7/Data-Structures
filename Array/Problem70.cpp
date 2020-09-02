/*
    Intersection of two arrays.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/total-count/0
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
        int n, m;
        cin>>n>>m;

        int *array1 = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array1[i];
        }

        int *array2 = new int[m];
        for(int i = 0; i < m; i++)
        {
            cin>>array2[i];
        }

        unordered_map<int, int> hash;
        for(int i = 0; i < n; i++)
        {
            hash[array1[i]] = 1;
        }

        for(int i = 0; i < m; i++)
        {
            if(hash.find(array2[i]) != hash.end())
            {
                hash[array2[i]] = 0;
            }
        }

        int intersection_elements = 0;

        for(auto i : hash)
        {
            if(i.second == 0)
            {
                intersection_elements++;
            }
        }

        cout<<intersection_elements<<endl;

    }

    return 0;
}