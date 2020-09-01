/*
    Immediate Smaller Element.
*/

#include <iostream>

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

        for(int i = 0; i < n - 1; i++)
        {
            if(array[i] > array[i + 1])
            {
                array[i] = array[i + 1];
            }

            else
            {
                array[i] = -1;
            }
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