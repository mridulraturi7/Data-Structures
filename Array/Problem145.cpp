/*
    Maximum Perimeter of Triangle from array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/maximum-perimeter-of-triangle-from-array/0
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

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int maxPerimeter = -1;

        sort(array, array + n);

        for(int i = n - 1; i > 1; i--)
        {
            if((array[i - 1] + array[i - 2] > array[i]) && (array[i - 2] + array[i] > array[i - 1]) && (array[i - 1] + array[i] > array[i - 2]))
            {
                maxPerimeter = array[i] + array[i - 1] + array[i - 2];
                break;
            }
        }

        cout<<maxPerimeter<<endl;
    }

    return 0;
}