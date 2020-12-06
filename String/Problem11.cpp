/*
    Lower Case to Upper Case.
*/

#include<iostream>
#include<string>

using namespace std;

string toLowerCase(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        str[i] -= 32;
    }

    return str;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<toLowerCase(str)<<endl;
    }

    return 0;
}