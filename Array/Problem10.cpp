/*
    At least two greater elements.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while (testCase-- != 0)
    {
        int n, array[100];
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int temp;
                if(array[i] > array[j])
                {
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }

        for(int i = 0; i < n - 2; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}