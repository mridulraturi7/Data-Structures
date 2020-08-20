/*
    Ishaan Loves Chocolates.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, chocolate[250];
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>chocolate[i];
        }

        int first = 0, last = n - 1;
        int sisterTaste = 0;

        while(first < last)
        {
            if(chocolate[first] > chocolate[last])
            {
                first++;
            }

            else
            {
                last--;
            }

            if(first == last)
            {
                sisterTaste = chocolate[first];
            }
        }
        cout<<sisterTaste<<endl;
    }

    return 0;
}