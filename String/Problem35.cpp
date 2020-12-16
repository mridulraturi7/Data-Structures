/*
    The Penalty Shootout.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/the-penalty-shootout3810/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        int penaltyScore(string str)
        {
            int goal = 0;
            for(int i = 0; i < str.length() - 1; i++)
            {
                if(str[i] == '2')
                {
                    if(str[i + 1] == '1')
                    {
                        goal++;
                    }
                }
            }

            return goal;
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
        cout<<ob.penaltyScore(str)<<endl;
    }

    return 0;
}