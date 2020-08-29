/*
    First and Last Occurrence of X.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, x;
        cin>>n>>x;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int start_index = -1, last_index = -1;

        for(int i = 0; i < n; i++)
        {
            if(array[i] == x)
            {
                start_index = i;
                break;
            }
        }

        for(int i = n - 1; i >= 0; i--)
        {
            if(array[i] == x)
            {
                last_index = i;
                break;
            }
        }

        if(start_index == -1 || last_index == -1)
        {
            cout<<"-1";
        }

        else
        {
            cout<<start_index<<" "<<last_index;
        }

        cout<<endl;
        
    }

    return 0;
}