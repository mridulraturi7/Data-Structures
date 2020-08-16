/*
    Find Index.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/find-index/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[100001], key;
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>key;

        for(int i = 0; i < n; i++)
        {
            if(array[i] == key)
            {
                cout<<i<<" ";
                break;
            }
        }

        for(int i = n - 1; i >= 0; i--)
        {
            if(array[i] == key)
            {
                cout<<i;
                break;
            }
        }
        cout<<endl;
    }

    return 0;
}