/*
    Convert string to lower case.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string toLower(string S)
        {
            for(int i = 0; i < S.length(); i++)
            {
                if(S[i] < 91)
                {
                    S[i] = S[i] + 32;
                }
            }

            return S;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.toLower(S)<<endl;
    }

    return 0;
}