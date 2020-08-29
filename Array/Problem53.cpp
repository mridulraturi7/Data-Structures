/*
    Make Co-Prime Array.
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

        int count = 0;

        for(int i = 0; i < n - 1; i++)
        {
            if(__gcd(array[i], array[i + 1]) != 1)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}