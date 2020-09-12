/*
    Jay's Apples.
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

        int max = *max_element(array, array + n);

        int *hash = new int[max + 1] ();
        for(int i = 0; i < n; i++)
        {
            hash[array[i]] = 1;
        }

        int count = 0;

        for(int i = 0; i <= max; i++)
        {
            if(hash[i] == 1)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
}