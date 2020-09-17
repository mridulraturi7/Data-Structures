/*
    King's War.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/kings-war/0
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
        int n;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int strongest = *max_element(array, array + n);
        int weakest = *min_element(array, array + n);

        int killed_by_king = 0;

        for(int i = 0; i < n; i++)
        {
            if(array[i] == strongest || array[i] == weakest)
            {
                killed_by_king++;
            }
        }

        cout<<(n - killed_by_king)<<endl;
    }
}