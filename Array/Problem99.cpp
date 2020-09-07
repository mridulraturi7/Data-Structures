/*
    Maximum Value after m range operation.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/max-value-after-m-range-operation/0
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, m;
        cin>>n>>m;

        int *array = new int[n] ();

        for(int i = 0; i < m; i++)
        {
            int a, b, k;
            cin>>a>>b>>k;
            for(int j = a; j <= b; j++)
            {
                array[j] += k;
            }
        }

        cout<<*max_element(array, array + n)<<endl;
    }

    return 0;
}