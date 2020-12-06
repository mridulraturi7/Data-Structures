/*
    Pattern of Strings.
*/

#include<iostream>
#include<string>

using namespace std;

void printPattern(string str)
{
    int len = str.length();
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len - i; j++)
        {
            cout<<str[j];
        }
        cout<<"\n";
    }
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        printPattern(str);
    }

    return 0;
}