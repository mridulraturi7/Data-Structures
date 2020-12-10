/*
    Check for Binary.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/check-for-binary/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

bool checkBinary(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != '0' && str[i] != '1')
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<checkBinary(str)<<endl;
    }

    return 0;
}