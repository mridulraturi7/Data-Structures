/*
    Friendly Array.
*/

#include<iostream>
#include<cstdlib>

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

        int friendliness = 0;

        for(int i = 0; i < n; i++)
        {
            int minDiff = 100000;
            for(int j = 0; j < n; j++)
            {
                if(i != j)
                {
                    int current_diff = abs(array[i] - array[j]);
                    if(current_diff < minDiff)
                    {
                        minDiff = current_diff;
                    }
                }
            }
            friendliness += minDiff;
        }

        cout<<friendliness<<endl;
    }

    return 0;
}