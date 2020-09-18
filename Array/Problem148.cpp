/*
    How many Pizzas?
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/how-many-pizzas/0
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
        int array1[10], array2[10];
        for(int i = 0; i < 10; i++)
        {
            cin>>array1[i];
        }

        for(int i = 0; i < 10; i++)
        {
            cin>>array2[i];
        }

        unordered_map<int, int> hash;
        for(int i = 0; i < 10; i++)
        {
            hash[array1[i]] = 1;
        }

        for(int i = 0; i < 10; i++)
        {
            if(hash.find(array2[i]) != hash.end())
            {
                hash[array2[i]] = 0;
            }
        }

        int count = 0;

        for(auto i : hash)
        {
            if(i.second == 0)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}