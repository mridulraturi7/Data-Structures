/*
    Reverse Sub Array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/reverse-sub-array5620/1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        void reverseSubArray(int array[], int l, int r)
        {
            int left = l - 1;
            int right = r - 1;
            while(left < right)
            {
                array[left] = array[left] + array[right];
                array[right] = array[left] - array[right];
                array[left] = array[left] - array[right];
                left++;
                right--;
            }
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

        int l, r;
        cin>>l>>r;

        Solution s;
        s.reverseSubArray(array, l, r);

        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}