/*
    Print the left element.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/print-the-left-element/0#ExpectOP
    Difficulty - School
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[1000], removeMax = 1, elementsToRemove;
        cin>>n;

        elementsToRemove = n;

        for(int i = 0 ; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0 ; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int temp;
                if(array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

        for(int i = 0; i < elementsToRemove - 1; i++)
        {
            if(removeMax == 1)
            {
                n = n - 1;
                removeMax  = 0;
            }

            else
            {
                n = n - 1;
                removeMax = 1;
                for(int j = 0; j < n; j++)
                {
                    array[j] = array[j+1];
                }
            }
        }

        cout<<array[0]<<endl;
    }

    return 0 ;
}