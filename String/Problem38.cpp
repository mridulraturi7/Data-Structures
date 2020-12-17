/*
    Count Even Substrings.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/count-even-substrings/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1#
    Difficulty - Basic
*/

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int countEvenSubstrings(string str)
{
    int count = 0;
    for(int i = 0; i < str.length(); i++)
    {
        for(int len = 1; len <= str.length() - i; len++)
        {
            string temp = str.substr(i, len);
            if((int(temp[len - 1]) % 2) == 0)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<countEvenSubstrings(str)<<endl;
    }

    return 0;
}