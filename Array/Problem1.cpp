#include<iostream>

using namespace std;

int main()
{
    int testCase;

    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, index, array[100];
        cin>>n>>index;

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cout<<array[index];
    }

    return 0;
}