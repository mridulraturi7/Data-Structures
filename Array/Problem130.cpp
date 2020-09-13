/*
    Equalization of an array.
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
        int n;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int max = *max_element(array, array + n);
        int min = *min_element(array, array + n);

        int operations = 0, m = max;

        while(min != max && operations < m)
        {
            for(int i = 0; i < n; i++)
            {
                if(array[i] == max)
                {
                    array[i]--;
                    break;
                }
            }

            for(int i = 0; i < n; i++)
            {
                if(array[i] == min)
                {
                    array[i]++;
                    break;
                }
            }

            operations++;

            max = *max_element(array, array + n);
            min = *min_element(array, array + n);
        }

        if(operations > m)
        {
            cout<<"-1"<<endl;
        }

        else
        {
            cout<<operations<<endl;
        }
    }

    return 0;
}