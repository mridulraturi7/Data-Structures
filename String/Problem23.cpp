/*
    Remove the vowels from a string.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    Difficulty - School
*/


#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string removeVowels(string str)
        {
            string res;
            for(int i = 0; i < str.length(); i++)
            {
                if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
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
        cout<<ob.removeVowels(str)<<endl;
    }

    return 0;
}