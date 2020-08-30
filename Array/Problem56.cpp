/*
    Check if two arrays are equal or not.
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

        int *array1 = new int[n];
        int *array2 = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array1[i];
        }

        int max1 = *max_element(array1, array1 + n);

        for(int i = 0; i < n; i++)
        {
            cin>>array2[i];
        }

        int max2 = *max_element(array2, array2 + n);

        int *hash1 = new int[max1 + 1] ();
        int *hash2 = new int[max2 + 1] ();

        for(int i = 0; i < n; i++)
        {
            hash1[array1[i]]++;
            hash2[array2[i]]++;
        }

        int count = 0;
        for(int i = 0; i <= max1; i++)
        {
            if(hash1[i] == hash2[i])
            {
                count = count + hash1[i];
            }
        }

        if(count == n)
        {
            cout<<"1";
        }

        else
        {
            cout<<"0";
        }

        cout<<endl;

    }

    return 0;
}