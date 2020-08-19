/*
    Rotate an array.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, d, input[10], temp[10];
        cin>>n>>d;

        for(int i = 0 ; i < n; i++)
        {
            cin>>input[i];
        }

        for(int i = 0; i < d; i++)
        {
            temp[i] = input[i];
        }

        for(int i = 0; i < n - d; i++)
        {
            input[i] = input[i + d];
        }

        int j = 0;
        for(int i = n - d; i < n; i++)
        {
            input[i] = temp[j];
            j++;
        }

        for(int i = 0; i < n; i++)
        {
            cout<<input[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

