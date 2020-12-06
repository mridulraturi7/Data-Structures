/*
    Delete Alternate Characters.
*/

#include<iostream>
#include<string>

using namespace std;

string deleteAlternateCharacters(string S)
{
    string result;
    for(int i = 0; i < S.length(); i+=2)
    {
        result += S[i];
    }

    return result;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string S;
        cin>>S;

        cout<<deleteAlternateCharacters(S)<<endl;
    }

    return 0;
}