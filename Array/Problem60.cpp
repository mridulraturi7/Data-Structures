/*
    Find the smallest and second smallest element in an array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array/0
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

        if(n < 2)
        {
            cout<<"-1"<<endl;
        }

        else
        {
            int i1, min1 = 1000, min2 = 1000;
            for(int i = 0; i < n; i++)
            {
                if(array[i] < min1)
                {
                    min1 = array[i];
                }
            }

            for(int i = 0; i < n; i++)
            {
                if(array[i] < min2 && array[i] != min1)
                {
                    min2 = array[i];
                }
            } 

            if(min2 == 1000)
            {
                cout<<"-1"<<endl;
            }

            else
            {
                cout<<min1<<" "<<min2<<endl;
            }   
        }  
    }

    return 0;
}