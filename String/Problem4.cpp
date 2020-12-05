/*
    Count of Camel Case Charaters.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/find-the-camel/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/

#include<iostream>
#include<string>

using namespace std;

int countCamelCase(string str)
{
    int count = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(isupper(str[i]))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<countCamelCase(str)<<endl;
    }

    return 0;
}