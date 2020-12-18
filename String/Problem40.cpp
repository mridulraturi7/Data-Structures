/*
    Binary String.
*/

#include<iostream>
#include<string>

using namespace std;

long binarySubstring(int n, string a)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == '1')
        {
            count++;
        }
    }

    return (count * (count - 1)) / 2;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        string str;
        cin>>str;

        cout<<binarySubstring(n, str)<<endl;   
    }

    return 0;
}