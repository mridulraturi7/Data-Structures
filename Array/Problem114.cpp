/*
    Tough Competitors.
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

        int min_difference = 10000;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int diff = abs(array[i] - array[j]);
                if(diff < min_difference)
                {
                    min_difference = diff;
                }
            }
        }

        cout<<min_difference<<endl;
    }

    return 0;
}