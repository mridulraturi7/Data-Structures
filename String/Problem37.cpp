/*
    Maximum Occurring Character.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1#
    Difficulty - Basic
*/

#include<iostream>
#include<map>

using namespace std;

char getMaxOccuringChar(char *str)
{
    map<char, int> hash;

    for(int i = 0; str[i] != '\0'; i++)
    {
        hash[str[i]]++;
    }

    int max = 0;
    char maxChar = 'a';

    for(auto i : hash)
    {
        if(i.second > max)
        {
            max = i.second;
            maxChar = i.first;
        }
    }

    return maxChar;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        char str[100];
        scanf("%s", str);

        cout<<getMaxOccuringChar(str)<<endl;
    }

    return 0;
}