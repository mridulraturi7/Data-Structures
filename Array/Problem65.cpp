/*
    Missing Number.
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

        int *array = new int[n];
        for(int i = 0; i < n - 1; i++)
        {
            cin>>array[i];
        }

        long total_sum = (n * (n + 1)) / 2;

        long found_sum = 0;
        for(int i= 0; i < n - 1; i++)
        {
            found_sum += array[i];
        }

        long missing_number = total_sum - found_sum;

        cout<<missing_number<<endl;
    }

    return 0;
}