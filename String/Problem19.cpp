/*
    Remove characters from alphanumeric string.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/remove-characters-from-alphanumeric-string0648/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string removeCharacters(string str)
        {
            string res;
            for(int i = 0; i < str.length(); i++)
            {
                if(isdigit(str[i]))
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

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        Solution ob;
        cout<<ob.removeCharacters(str)<<endl;
    }

    return 0;
}