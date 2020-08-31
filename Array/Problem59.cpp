/*
    Elements in the Range.
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
        int n, a, b;
        cin>>n>>a>>b;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        //sort(array, array + n);
        bool result = true;

        for(int i = a; i <= b; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(array[j] != i)
                {
                    result = false;
                    break;
                }
            }
        }

        /*
        int l = 0, r = n - 1;
        while(l < r)
        {
            if(array[l] == a && array[r] == b)
            {
                int elements = array[r] - array[l];
                if(elements == (r - l))
                {
                    result = true;
                }
                break;
            }

            if(array[l] != a)
            {
                l++;
            }

            if(array[r] != b)
            {
                b--;
            }
        }
        */

        if(result)
        {
            cout<<"Yes"<<endl;
        }

        else
        {
            cout<<"No"<<endl;
        }
        
    }

    return 0;
}