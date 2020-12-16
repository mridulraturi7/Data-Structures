/*
    Check if a string is Isogram or not.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not-1587115620/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>
#include<string>

using namespace std;

bool isIsogram(string str)
{
    int array[26] = {0};
    for(int i = 0; i < str.length(); i++)
    {
        array[str[i] - 'a']++;

        if(array[str[i] - 'a'] > 1)
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

        cout<<isIsogram(str)<<endl;
    }

    return 0;
}