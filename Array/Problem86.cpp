/*
    Find first and last occurrence of X.
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
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int x, first_index = -1, last_index = -1;
        bool found= false;
        cin>>x;

        for(int i = 0; i < n; i++)
        {
            if(array[i] == x)
            {
                first_index = i;
                found = true;
                break;
            }
        }

        for(int i = n - 1; i >= 0; i--)
        {
            if(array[i] == x)
            {
                last_index = i;
                found = true;
                break;
            }
        }

        if(found)
        {
            cout<<first_index<<" "<<last_index<<endl;
        }
        
        else
        {
            cout<<"-1"<<endl;
        }
        
    }
	return 0;
}