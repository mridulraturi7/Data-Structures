/*
    Rearrange the array.
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

        int l = 0, r = n - 1;
        while(l <= r)
        {
            cout<<array[l]<<" ";

            if(l != r)
            {
                cout<<array[r]<<" ";
                r--;
            }
            l++;
        }
        
        cout<<endl;
    }

    return 0;
}