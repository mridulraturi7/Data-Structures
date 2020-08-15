/*
    Reverse an array.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[100];
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = n - 1; i >= 0; i--)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}