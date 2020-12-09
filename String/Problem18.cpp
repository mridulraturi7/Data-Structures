/*
    Check String.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/check-string1818/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1#
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        bool check(string str)
        {
            

            return true;
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

        bool res = ob.check(str);

        if(res)
        {
            cout<<"Yes";
        }

        else
        {
            cout<<"No";
        }

        cout<<endl;
    }

    return 0;
}