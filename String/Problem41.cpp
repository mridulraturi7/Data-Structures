/*
    Sum of numbers in string.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sum-of-numbers-in-string/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>
#include<string>

using namespace std;

int calculateSum(string str)
{
    string digit = "0";
    int sum = 0;
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = i; isdigit(str[j]); j++)
        {
            digit += str[j];
            i = j;
        }

        sum = sum + stoi(digit);

        digit = "0";
    }

    return sum;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<calculateSum(str)<<endl;
    }

    return 0;
}
