/*
    Sort in specific order.
*/

#include<iostream>
#include<algorithm>

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
            if((array[i] % 2) != 0)
            {
                array[i] = -1 * array[i];
            }
        }

        sort(array, array + n);

        for(int i = 0; i < n; i++)
        {
            if(array[i] % 2 != 0)
            {
                array[i] = -1 * array[i];
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