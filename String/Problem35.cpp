/*
    
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