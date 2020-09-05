/*
    Form largest number from digits.
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
        for(int i = n - 1; i >= 0; i--)
        {
            cout<<array[i];
        }

        cout<<endl;
    }

    return 0;
}