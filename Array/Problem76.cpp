/*
    Longest Increasing Subarray.
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

        int count = 1, maxCount = 1;
        for(int i = 0; i < n - 1; i++)
        {
            if(array[i + 1] > array[i])
            {
                count++;
            }

            else
            {
                count = 1;
            }

            if(count > maxCount)
            {
                maxCount = count;
            }
        }

        cout<<maxCount<<endl;
    }

    return 0;
}