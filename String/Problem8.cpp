/*
    Pattern of Strings.
*/

#include<iostream>
#include<string>

using namespace std;

void printPattern(string S)
{
    int len = S.length();
    for(int i = 0; i < len; i++)
    {
        cout<<S<<"\n";
        S.erase(S.end() - 1);
    }
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string S;
        cin>>S;

        printPattern(S);
    }

    return 0;
}