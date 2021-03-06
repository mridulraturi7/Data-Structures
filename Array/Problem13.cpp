/*
    Count of Smaller Elements.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/count-of-smaller-elements/0
    Difficulty - School
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, x, array[100001], count = 0;
        cin>>n;

        for(int i = 0 ; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>x;

        for(int i = 0; i < n; i++)
        {
            if(array[i] <= x)
            {
                count++;
            }
            if(array[i] > x)
            {
                break;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}