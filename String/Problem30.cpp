/*
    Print first letter of every word in the string.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>
#include<string>
#include<sstream>

using namespace std;



int main()
{
    int testCase;
    cin>>testCase;

    cin.ignore();

    while(testCase-- != 0)
    {
        string str;
        getline(cin, str);

        Solution ob;
        cout<<ob.firstAlphabet(str)<<endl;
    }

    return 0;
}