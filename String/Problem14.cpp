/*
    Count the alphabets.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/count-alphabets/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
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
        string str;
        cin>>str;

        int count_alpha = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if(isalpha(str[i]))
            {
                count_alpha++;
            }
        }

        cout<<count_alpha<<endl;
    }

    return 0;
}