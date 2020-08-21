/*
    Greater on right side
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[100];
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        
        for(int i = 0; i < n - 1; i++)
        {
            int max = 0;
            for(int j = i + 1; j < n; j++)
            {
                if(array[j] > max)
                {
                    max = array[j];
                }
            }
            array[i] = max;
        }

        array[n - 1] = -1;
        


        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}