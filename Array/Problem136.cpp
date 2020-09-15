/*
    Minimum Sum of two elements from two arrays.
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

        int *array1 = new int[n];
        int *array2 = new int[n];

        for(int i = 0; i  < n; i++)
        {
            cin>>array1[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin>>array2[i];
        }

        int min_sum = 2000;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i != j)
                {
                    int current_sum = array1[i] + array2[j];
                    if(current_sum < min_sum)
                    {
                        min_sum = current_sum;
                    }
                }
            }
        }

        cout<<min_sum<<endl;
    }

    return 0;
}