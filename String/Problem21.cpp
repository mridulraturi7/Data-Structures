/*
    Triangle shrinking downwards.
*/

#include<iostream>
#include<string>

using namespace std;

void printPattern(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<".";
        }

        for(int k = i; k < str.length(); k++)
        {
            cout<<str[k];
        }

        cout<<endl;
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