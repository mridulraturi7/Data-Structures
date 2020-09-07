/*
    Sort in specific order.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sort-in-specific-order/0
    Difficulty - Basic
*/

#include<iostream>
#include<vector>
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

        vector<int> vec(n);
        for(int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }

        vector<int> even, odd;
        for(int i = 0; i < n; i++)
        {
            if(vec[i] % 2 == 0)
            {
                even.push_back(vec[i]);
            }

            else
            {
                odd.push_back(vec[i]);
            }
            
        }

        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());

        for(int i = 0; i < odd.size(); i++)
        {
            cout<<odd[i]<<" ";
        }

        for(int i = 0; i < even.size(); i++)
        {
            cout<<even[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}