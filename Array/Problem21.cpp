/*
    Perfect Arrays.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/perfect-arrays/0
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[100];
        cin>>n;

        string result = "PERFECT";

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int left = 0, right = n - 1;

        while(left < right)
        {
            if(array[left] != array[right])
            {
                result = "NOT PERFECT";
                break;
            }
            left++;
            right--;
        }
        cout<<result<<endl;
    }

    return 0;
}