/*
    Red Or Green.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/red-or-green5711/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        int RedOrGreen(string str)
        {
            int red = 0, green = 0;
            for(int i = 0; i < str.length(); i++)
            {
                if(str[i] == 'R')
                {
                    red++;
                }

                else
                {
                    green++;
                }
            }

            return (red < green) ? red : green;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        Solution ob;
        cout<<ob.RedOrGreen(str)<<endl;
    }

    return 0;
}