/*
    Count triplets with sum smaller than X.
*/

#include <iostream>
#include <algorithm>

using namespace std;

long countTriplets(long array[], int n, long long x);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        long long x;
        cin>>x;

        long *array = new long[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        sort(array, array + n);

        long triplets = countTriplets(array, n, x);

        cout<<triplets<<endl;

    }

    return 0;
}

long countTriplets(long array[], int n, long long x)
{
    long count = 0;

    for(int i = 0; i < n - 2; i++)
    {
        /*
        int l = i + 1, r = n - 1;
        while(l < r)
        {
            long long sum = array[i] + array[l] + array[r];
            if(sum < x)
            {
                count++;
            }

            r--;
        }
        */
       for(int j = i + 1; j < n - 1; j++)
       {
           for(int k = j + 1; k < n; k++)
           {
               long long sum = array[i] + array[j] +array[k];
               if(sum < x)
               {
                   count++;
               }
           }
       }
    }

    return count;
}