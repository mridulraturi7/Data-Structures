/*
    Reverse a string.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/reverse-a-string/1/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>
#include<string>

using namespace std;

string reverseString(string str)
{
    int l = 0, r = str.length() - 1;

    while(l < r)
    {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;

        l++;
        r--;
    }

    return str;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<reverseString(str)<<endl;
    }

    return 0;
}