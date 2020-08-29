/*
    Sum of Distinct Elements.
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

        sort(array, array + n);

        int sum = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(array[i] != array[i + 1])
            {
                sum += array[i];
            }
        }

        sum = sum + array[n - 1];

        cout<<sum<<endl;
    }

    return 0;
}

