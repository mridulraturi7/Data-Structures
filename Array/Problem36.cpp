/*
    Greater on right side
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

        /* Logic 1 O(n^2)
        for(int i = 0; i < n - 1; i++)
        {
            int max = 0;
            for(int j = i + 1; j < n; j++)
            {
                if(array[j] > max)
                {
                    max = array[j];
                }
            }
            array[i] = max;
        }

        array[n - 1] = -1;
        */

        int max = array[n - 1];
        array[n - 1] = -1;

        for(int i = n - 2; i >= 0; i--)
        {
            int temp_max = array[i];
            array[i] = max;

            if(temp_max > max)
            {
                max = temp_max;
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}