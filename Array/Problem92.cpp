/*
    Find second largest element.
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

        int max1 = 0, max2 = -1;

        for(int i = 0; i < n; i++)
        {
            if(array[i] > max1)
            {
                max1 = array[i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(array[i] > max2 && array[i] != max1)
            {
                max2 = array[i];
            }
        }

        cout<<max2<<endl;
    }

    return 0;
}