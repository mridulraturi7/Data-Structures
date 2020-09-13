/*
    Minimize sum of alternate product.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/minimize-sum-of-alternate-product/0
    Difficulty - Basic
*/

#include<iostream>
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

        long *array = new long[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        sort(array, array + n);

        int l = 0, r = n - 1;

        long long sop = 0;

        while(l  < r)
        {
            sop += (array[l] * array[r]);

            l++;
            r--;
        }

        cout<<sop<<endl;
    }

    return 0;
}