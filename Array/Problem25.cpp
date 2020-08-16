/*
    Sum and Average upto 2 decimal Places.
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

        float total = 0, average = 0;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i++)
        {
            total += array[i];
        }

        average = (float)(total/n);

        printf("%.0f %.2f", total, average);

        cout<<endl;  
    }

    return 0;
}