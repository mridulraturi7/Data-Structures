/*
    Product of array elements.
*/

#include<iostream>

using namespace std;

long long int product(int array[], int n, long long mod);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int array[100001] = { 0 };
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        long long int mod = 1000000007;

        cout<<product(array, n, mod)<<endl;
    }

    return 0;
}

long long int product(int array[], int n, long long mod)
{
    long long int prod = 1;
    for(int i = 0; i < n; i++)
    {
        prod = prod * array[i];
        prod = prod % mod;
    }

    return prod;
}