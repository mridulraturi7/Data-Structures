/*
    Sum of Distinct Elements.
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
        int hash[1001] = { 0 };
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            hash[array[i]]++;

            if(hash[array[i]] < 2)
            {
                sum += array[i];
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}

