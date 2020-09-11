/*
    Greater on Right Side.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/greater-on-right-side/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        void nextGreatest(int array[], int n)
        {
            int max = array[n - 1];
            for(int i = n - 2; i >= 0; i--)
            {
                int prev_value = array[i];
                array[i] = max;

                if(prev_value > max)
                {
                    max = prev_value;
                }
            }
            array[n - 1] = -1;
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
        s.nextGreatest(array, n);

        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}