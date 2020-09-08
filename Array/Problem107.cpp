/*
    Multiply left and right array sum.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, mid;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        mid = n / 2;

        int left_sum = 0, right_sum = 0;
        for(int i = 0; i < mid; i++)
        {
            left_sum += array[i];
        }

        for(int i = mid; i < n; i++)
        {
            right_sum += array[i];
        }

        cout<<left_sum * right_sum<<endl;
    }

    return 0;
}