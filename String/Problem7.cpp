/*
    Delete Alternate Characters.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/java-delete-alternate-characters/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
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