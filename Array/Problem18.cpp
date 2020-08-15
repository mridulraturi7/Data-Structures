/*
    Pascal's Triangle
*/

#include<iostream>

using namespace std;

int factorial(int);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int k;
        cin>>k;
        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                int num, deno;
                num = factorial(i);
                deno = factorial(i - j) * factorial(j);
                cout<<num/deno<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

int factorial(int n)
{
    int fact = 1;
    for(int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}