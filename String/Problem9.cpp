/*
    Pattern of Strings.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/pattern-of-strings/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
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