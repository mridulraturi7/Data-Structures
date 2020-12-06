/*
    Lower Case to Upper Case.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/lower-case-to-upper-case/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

string toUpperCase(string str)
{
    string res;
    for(int i = 0; i < str.length(); i++)
    {
        res.push_back(toupper(str[i]));
    }

    return res;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<toUpperCase(str)<<endl;
    }

    return 0;
}