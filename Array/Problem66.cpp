/*
    Majority Element.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/majority-element/0
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

        int max = *max_element(array, array + n);

        int *hash = new int[max + 1] ();

        for(int i = 0; i < n; i++)
        {
            hash[array[i]]++;
        }

        int majority_element = -1;

        for(int i = 0; i <= max; i++)
        {
            if(hash[i] > n/2)
            {
                majority_element = i;
                break;
            }
        }

        cout<<majority_element<<endl;
        
    }

    return 0;
}