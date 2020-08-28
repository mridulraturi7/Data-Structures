/*
    Number of Occurrence.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, array[100000], x;

        cin>>n>>x;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int beg = 0, end = n - 1, freq = 0;

        while(beg <= end)
        {
            if(array[beg] == x && array[end] == x)
            {
                freq = (end - beg) + 1;
                break;
            }

            if(array[beg] != x)
            {
                beg++;
            }

            if(array[end] != x)
            {
                end--;
            }
        }

        if(freq == 0)
        {
            freq = -1;
        }

        cout<<freq<<endl;
    }

    return 0;
}