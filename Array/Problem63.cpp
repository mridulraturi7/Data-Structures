/*
    Fighting the Darkness.
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

        long long *array = new long long[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        long long days = 0;
        for(int i = 0; i < n; i++)
        {
            if(array[i] > days)
            {
                days = array[i];
            }
        }

        cout<<days<<endl;
    }

    return 0;
}