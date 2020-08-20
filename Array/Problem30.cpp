/*
    Binary Array Sorting.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[100000], countZero = 0;
        cin>>n;

        //Take input array
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        //Count no. of zeros.
        for(int i = 0; i < n; i++)
        {
            if(array[i] == 0)
            {
                countZero++;
            }
        }

        //Insert all zeros in the LHS of array         
        for(int i = 0; i < n; i++)
        {
            if(i < countZero)
            {
                array[i] = 0;
            }

            else
            {
                array[i] = 1;
            }
            
        }

        //Print output array
        for(int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}