/*
    Powers Game.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int x, n;
        cin>>x>>n;

        long long int prod = 1;

        int hash[10] = { 0 };

        for(int i = 0; i < n; i++)
        {
            prod *= x;
            int temp = prod;
            while(temp != 0)
            {
                int rem = temp % 10;
                hash[rem]++;
                temp /= 10;
            }
        }

        for(int i = 0; i < 10; i++)
        {
            cout<<hash[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}