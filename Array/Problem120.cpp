/*
    Count Pairs Odd XOR.
*/

#include<iostream>

using namespace std;

long long countXorPairs(long long array[], int n);

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

        cout<<countXorPairs(array, n)<<endl;
    }

    return 0;
}

long long countXorPairs(long long array[], int n)
{
    int even_numbers = 0, odd_numbers = 0;
    for(int i = 0; i < n; i++)
    {
        if((array[i] % 2) == 0)
        {
            even_numbers++;
        }

        else
        {
            odd_numbers++;
        }
    }

    return even_numbers * odd_numbers;
}