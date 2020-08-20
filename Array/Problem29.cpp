/*
    Inverse Permutation
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/inverse-permutation/0
    Difficulty - Basic
*/

//Inverse Permutation is the permutation which we get by inserting position of an element at the position
//specified by the element value. 

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, input[50], output[50];
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>input[i];
        }

        for(int i = 0; i < n; i++)
        {
            output[input[i] - 1] = i + 1;
        }

        for(int i = 0; i < n; i++)
        {
            cout<<output[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}