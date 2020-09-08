/*
    Play with OR.
*/

#include<iostream>

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

        int *output = new int[n];
        for(int i = 0; i < n - 1; i++)
        {
            output[i] = array[i] | array[i + 1];
        }

        output[n - 1] = array[n - 1];

        for(int i = 0; i < n; i++)
        {
            cout<<output[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}