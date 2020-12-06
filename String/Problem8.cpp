/*
    Pattern of Strings - Using Inbuilt Function.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/pattern-of-strings/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
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