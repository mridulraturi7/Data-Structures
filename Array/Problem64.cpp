/*
    Maximize ∑arr[i]*i of an Array.
*/

#include<iostream>
#include<algorithm>
using namespace std;

#define MOD 1000000007

int main() {
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

        sort(array, array + n);

        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            sum += (array[i] * i);
        }

        cout<<sum % MOD<<endl;

    }
	return 0;
}