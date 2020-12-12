/*
    Concatenate and reverse the resultant string.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/java-strings-set-1/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
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
        string str1, str2;
        cin>>str1>>str2;

        string res;
        res = str1 + str2;

        int l = 0, r = res.length() - 1;

        while(l < r)
        {
            char temp = res[l];
            res[l] = res[r];
            res[r] = temp;

            l++;
            r--;
        }

        cout<<res<<endl;
    }

    return 0;
}