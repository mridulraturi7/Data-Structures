/*
    Check for Binary.
*/

#include<iostream>
#include<string>

using namespace std;

int checkBinary(string str)
{
    for(int i = 0; i < str.length() - 1; i++)
    {
        if(str[i] != '0' && str[i] != '1')
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<checkBinary(str)<<endl;
    }

    return 0;
}