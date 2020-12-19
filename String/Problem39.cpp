/*
    Sort String.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sort-string/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

string sortString(string str)
{
    map<char, int> hash;
    for(int i = 0; i < str.length(); i++)
    {
        hash[str[i]]++;
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

        cout<<sortString(str)<<endl;
    }

    return 0;
}