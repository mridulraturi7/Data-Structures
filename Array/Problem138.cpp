/*
    Absolute Distinct Count.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/absolute-distinct-count/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int distinctCount(int array[], int n)
        {
            int distinct = n;
            int l = 0, r = n - 1;
            while(l < r)
            {
                while(l != r && array[l] == array[l + 1])
                {
                    distinct--;
                    l++;
                }

                while(l != r && array[r] == array[r - 1])
                {
                    distinct--;
                    r--;
                }

                if(l == r)
                {
                    break;
                }

                if(array[l] + array[r] == 0)
                {
                    distinct--;
                    l++;
                    r--;
                }

                else if(array[l] + array[r] < 0)
                {
                    l++;
                }

                else
                {
                    r--;
                }
                
            }

            return distinct;
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

        cout<<s.distinctCount(array, n)<<endl;
    }

    return 0;
}