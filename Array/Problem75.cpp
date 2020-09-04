/*
    Binary Search.
*/

#include<iostream>

using namespace std;

int binarySearch(int array[], int n, int key);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, key;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>key;

        int res = binarySearch(array, n, key);

        cout<<res<<endl;

    }
}

int binarySearch(int array[], int n, int key)
{
    int begin = 0, end = n - 1, mid;

    while(begin <= end)
    {
        mid = (begin + end) / 2;

        if(array[mid] == key)
        {
            return mid;
        }

        else if(array[mid] > key)
        {
            end = mid - 1;
        }

        else
        {
            begin = mid + 1;
        }
    }

    return -1;
}