/*
    C++ 2D Arrays - Find the transpose of a 2D Matrix.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/c-2-d-arrays/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[100][100];
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>array[i][j];
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout<<array[j][i]<< " ";
            }
        }
        cout<<endl;
    }

    return 0;
}