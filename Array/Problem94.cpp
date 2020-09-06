/*
    Shuffle Integers.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, half;
        cin>>n;

        half = n/2;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < half; i++)
        {
            cout<<array[i]<<" "<<array[i + half]<<" ";
        }

        if(n%2 != 0)
        {
            cout<<array[n - 1];
        }

        cout<<endl;
    }

    return 0;
}