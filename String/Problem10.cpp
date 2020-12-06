/*
    Substring.
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string S;
        cin>>S;

        int l, r;
        cin>>l>>r;

        for(int i = l; i <= r; i++)
        {
            cout<<S[i];
        }

        cout<<endl;
    }

    return 0;
}