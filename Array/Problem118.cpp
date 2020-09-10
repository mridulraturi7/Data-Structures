/*
    Sum Array Puzzle.
*/

#include<iostream>

using namespace std;

void sumArray(int array[], int n);

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

        sumArray(array, n);

        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }
}

void sumArray(int array[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    for(int i = 0; i < n; i++)
    {
        array[i] = sum - array[i];
    }
}