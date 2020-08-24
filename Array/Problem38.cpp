/*
    Convert array into Zig-Zag fashion. 
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion/0
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
        int n, array[100];
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n - 1; i++)
        {
            if(i % 2 == 0)
            {
                if(array[i] > array[i + 1])
                {
                    //swapping two values
                    array[i] = array[i] + array[i + 1];
                    array[i + 1] = array[i] - array[i + 1];
                    array[i] = array[i] - array[i + 1];
                }
            }

            else
            {
                if(array[i] < array[i + 1])
                {
                    //swapping two values
                    array[i] = array[i] + array[i + 1];
                    array[i + 1] = array[i] - array[i + 1];
                    array[i] = array[i] - array[i + 1];
                }
            }   
        }

        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}