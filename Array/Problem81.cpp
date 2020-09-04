/*
    Count number of elements between two given elements in array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/triplet-family/1
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
        int n;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int num1, num2;
        cin>>num1>>num2;

        int l = 0, r = n - 1, l_index, r_index;
        while(l < r)
        {
            if(array[l] != num1)
            {
                l++;
            }
        
            if(array[r] != num2)
            {
                r--;
            }

            if(array[l] == num1 && array[r] == num2)
            {
                l_index = l;
                r_index = r;
                break;
            }
        }

        cout<<((r_index - l_index) - 1)<<endl;
    }

    return 0;
}