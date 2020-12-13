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

class Solution
{
    public:
        string firstAlphabet(string str)
        {
            string res, temp;

            stringstream stream(str);

            while(stream >> temp)
            {
                res.push_back(temp[0]);
            }

            return res;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    cin.ignore();

    

    return 0;
}