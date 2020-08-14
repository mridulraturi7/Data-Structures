/*
    Printing an array element.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/c-array-print-an-element-set-2/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;

    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, index, array[100];
        cin>>n>>index;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cout<<array[index]<<endl;
    }

    return 0;
}