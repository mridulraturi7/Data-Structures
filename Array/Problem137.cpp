/*
    Minimum number to form the sum even.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/minimum-number-to-form-the-sum-even/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int minNumber(long long int array[], int n)
        {
            int odd_count = 0;
            for(int i = 0; i < n; i++)
            {
                if((array[i] % 2) != 0)
                {
                    odd_count++;
                }
            }

            return (odd_count % 2) == 0 ? 2 : 1;
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

        long long int *array = new long long int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        Solution s;

        cout<<s.minNumber(array, n)<<endl;
    }

    return 0;
}