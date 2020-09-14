/*
    Why is Melody so Chocolaty?
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/why-is-melody-so-chocolaty/0
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

        int max_happiness = 0;

        for(int i = 0; i < n - 1; i++)
        {
            int curremt_happiness = array[i] + array[i + 1];

            if(curremt_happiness > max_happiness)
            {
                max_happiness = curremt_happiness;
            }
        }

        cout<<max_happiness<<endl;
    }

    return 0;
}