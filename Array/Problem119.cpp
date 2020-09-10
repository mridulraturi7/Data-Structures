/*
    First element to occur k times.
*/

#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, k;
        cin>>n>>k;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        unordered_map<int, int> hash;

        for(int i = 0; i < n; i++)
        {
            hash[array[i]]++;
        }

        for(int i = 0; i < n; i++)
        {
            if(hash[array[i]] == k)
            {
                cout<<array[i]<<endl;
                break;
            }
        }
    }

    return 0;
}