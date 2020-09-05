/*
    Surpasser Count.
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

        for(int i = 0; i < n - 1; i++)
        {
            int count = 0;
            for(int j = i + 1; j < n; j++)
            {
                if(array[j] > array[i])
                {
                    ++count;
                }
            }
            array[i] = count;
        }

        array[n - 1] = 0;

        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}