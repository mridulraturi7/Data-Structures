/*
    Triangle shrinking downwards.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/triangle-shrinking-downwards/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
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