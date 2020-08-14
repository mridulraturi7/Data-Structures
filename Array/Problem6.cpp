/*
    Sum of Series.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, sum = 0;
        cin>>n;

        sum = (n * (n + 1)) / 2;

        cout<<sum<<endl;
    }
    return 0;
}