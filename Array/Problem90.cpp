/*
    Arranging the array.
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

        for(int i = 0; i < n; i++)
        {
            if(array[i] < 0)
            {
                cout<<array[i]<<" ";
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(array[i] >= 0)
            {
                cout<<array[i]<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}