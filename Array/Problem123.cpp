/*
    Maximum product of two numbers.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/maximum-product-of-two-numbers/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int maxProduct(int array[], int n)
        {
            int max1 = 0, max2 = -1, maxIndex;
            for(int i = 0; i < n; i++)
            {
                if(array[i] > max1)
                {
                    max1 = array[i];
                    maxIndex = i;
                }
            }

            array[maxIndex] = 0;

            for(int i = 0; i < n; i++)
            {
                if(array[i] > max2)
                {
                    max2 = array[i];
                }
            }

            return max1 * max2;
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

        cout<<s.maxProduct(array, n)<<endl;
    }

    return 0;
}