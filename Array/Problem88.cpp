/*
    Type of Array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/type-of-array/0
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

        bool ascending = true, descending = true, ascending_rotated = false, descending_rotated = false;

        for(int i = 0; i < n - 1; i++)
        {
            if(array[i] > array[i + 1])
            {
                ascending = false;
            }

            if(array[i] < array[i + 1])
            {
                descending = false;
            }
        }

        int maxElement = *max_element(array, array + n);
        int minELement = *min_element(array, array + n);

        int maxElement_index, minELement_index;

        for(int i = 0; i < n; i++)
        {
            if(array[i] == maxElement)
            {
                maxElement_index = i;
            }

            if(array[i] == minELement)
            {
                minELement_index = i;
            }
        }

        if(minELement_index < maxElement_index)
        {
            descending_rotated = true;
        }

        else if(minELement_index > maxElement_index)
        {
            ascending_rotated = true;
        }

        cout<<maxElement<<" ";

        if(ascending)
        {
            cout<<"1";
        }
        else if(descending)
        {
            cout<<"2";
        }
        else if(descending_rotated)
        {
            cout<<"3";
        }
        else if(ascending_rotated)
        {
            cout<<"4";
        }
        
        cout<<endl;
    }

    return 0;
}