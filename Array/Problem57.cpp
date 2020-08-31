/*
    Product of maximum in first array and minimum in second array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n1;
        cin>>n1;

        long long *array1 = new long long[n1];
        for(int i = 0; i < n1; i++)
        {
            cin>>array1[i];
        }

        int n2;
        cin>>n2;

        long long *array2 = new long long[n2];
        for(int i = 0; i < n2; i++)
        {
            cin>>array2[i];
        }

        long long prod, max = -1000000000, min = 100000000;
        for(int i = 0; i < n1; i++)
        {
            if(array1[i] > max)
            {
                max = array1[i];
            }
        } 

        for(int i = 0; i < n2; i++)
        {
            if(array2[i] < min)
            {
                min = array2[i];
            }
        }

        prod = max * min;

        cout<<prod<<endl;
    }

    return 0;
}
