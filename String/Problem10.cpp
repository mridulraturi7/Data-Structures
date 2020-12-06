/*
    Substring.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/java-substring5058/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string S;
        cin>>S;

        int l, r;
        cin>>l>>r;

        for(int i = l; i <= r; i++)
        {
            cout<<S[i];
        }

        cout<<endl;
    }

    return 0;
}