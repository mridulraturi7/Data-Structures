/*
    Pascal's Triangle
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/pascal-triangle/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int k, pascal[25][25];
        cin>>k;
        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(i == j || j == 0)
                {
                    pascal[i][j] = 1;
                }

                else
                {
                    pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
                }
            }
        }

        for(int i = 0; i < k; i++)
        {
            cout<<pascal[k-1][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}