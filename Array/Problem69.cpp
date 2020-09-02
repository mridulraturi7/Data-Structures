/*
    Total Count.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/total-count/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int countPerElement(int, int);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, k;
        cin>>n>>k;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int total_element_count = 0;

        for(int i= 0; i < n; i++)
        {
            total_element_count += countPerElement(array[i], k);
        }

        cout<<total_element_count<<endl;
    }

    return 0;
}

int countPerElement(int num, int k)
{
    int rem = (num % k);
    int elements = 0;

    if(rem == 0)
    {
        elements = (num / k);
    }
    
    else
    {
        elements = (num / k) + 1;
    }
    

    return elements;  
}