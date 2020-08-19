/*
    Smaller and Larger.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/smaller-and-larger/0
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
        int n, x, array[100], smaller = 0, larger = 0;
        cin>>n>>x;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(array[i] <= x)
            {
                smaller++;
            }

            if(array[i] >= x)
            {
                larger++;
            }
        }
        cout<<smaller<<" "<<larger<<endl;
    }
    return 0;
}