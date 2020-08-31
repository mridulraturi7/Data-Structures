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