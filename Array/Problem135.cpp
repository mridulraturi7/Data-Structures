/*
    Searching a number.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/searching-a-number0324/1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int search(int array[], int n, int k)
        {
            for(int i = 0; i < n; i++)
            {
                if(array[i] == k)
                {
                    return i + 1;
                }
            }

            return -1;
        }
};

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

        Solution s;

        cout<<s.search(array, n, k)<<endl;
    }

    return 0;
}