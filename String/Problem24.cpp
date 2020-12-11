/*
    Remove Spaces.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/remove-spaces/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string removeSpaces(string str)
        {
            string res;
            for(int i = 0; i < str.length(); i++)
            {
                if(str[i] != ' ')
                {
                    res.push_back(str[i]);
                }
            }

            return res;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    cin.ignore();

    while(testCase-- != 0)
    {
        string str;
        getline(cin, str);

        Solution ob;
        cout<<ob.removeSpaces(str)<<endl;
    }

    return 0;
}