/*
    Product of array elements.
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

