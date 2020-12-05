/*
    Reverse a String.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/java-reverse-a-string0416/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string revStr(string S)
        {
            int l = 0;
            int r = S.length() - 1;

            while(l < r)
            {
                char temp;
                temp = S[l];
                S[l] = S[r];
                S[r] = temp;

                l++;
                r--;
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
        cout<<ob.revStr(S)<<endl;
    }

    return 0;
}