/*
    Convert a list of characters into a string.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/convert-a-list-of-characters-into-a-string5142/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string chartostr(char ch[], int n)
        {
            string result;
            for(int i = 0; i < n; i++)
            {
                result += ch[i];
            }

            return result;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        char *ch = new char[n];
        for(int i = 0; i < n; i++)
        {
            cin>>ch[i];
        }

        Solution ob;
        cout<<ob.chartostr(ch, n)<<endl;
    }

    return 0;
}