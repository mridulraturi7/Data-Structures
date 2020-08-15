/*
    Print the left element.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[1000], elementsLeft;
        cin>>n;

        elementsLeft = n;

        for(int i = 0 ; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0 ; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int temp;
                if(array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

        int left = n/2;
        if(n%2 == 0)
        cout<<array[left-1]<<endl;

        else
        {
            cout<<array[left]<<endl;
        }
        
    }

    return 0 ;
}