/*
    Value equal to index value.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[50];
        cin>>n;

        bool found = false;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(array[i] == i + 1)
            {
                found = true;
                cout<<i + 1<<" ";
            }
        }

        if(!found)
        {
            cout<<"Not Found";
        }
        cout<<endl;
    }

    return 0;
}