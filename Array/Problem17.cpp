/*
    Average.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/average/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[50], sum = 0;
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i++)
        {
            sum = sum + array[i];
            cout<<sum/(i+1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}