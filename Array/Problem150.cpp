/*
    Even Occurring Elements.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/even-occurring-elements4332/1
    Difficulty - Basic
*/

#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution
{
    public:
        vector<int> repeatingEven(int array[], int n)
        {
            map<int, int> hash;
            for(int i = 0; i < n; i++)
            {
                hash[array[i]]++;
            }

            vector<int> vec;
            for(auto i : hash)
            {
                if((i.second % 2) == 0)
                {
                    vec.push_back(i.first);
                }
            }

            if(vec.size() == 0)
            {
                vec.push_back(-1);
            }

            return vec;
        }
};

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

        Solution s;
        vector<int> result = s.repeatingEven(array, n);

        for(int i = 0; i < result.size(); i++)
        {
            cout<<result[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}