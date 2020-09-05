/*
    Missing number in array.
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

        int total_sum = (n * (n + 1)) / 2;
        int missing_number, sum = 0;
        for(int i = 0; i < n - 1; i++)
        {
            sum += array[i];
        }

        missing_number = total_sum - sum;

        cout<<missing_number<<endl;
    }

    return 0;
}