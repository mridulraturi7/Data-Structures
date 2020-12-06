/*
    Split Strings.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution
{
    public:
        vector<string> splitString(string S)
        {
            vector<string> result;

            string alpha, numeric, special;

            for(int i = 0; i < S.length(); i++)
            {
                if(isalpha(S[i]))
                {
                    alpha.push_back(S[i]);
                }

                else if(isdigit(S[i]))
                {
                    numeric.push_back(S[i]);
                }

                else
                {
                    special.push_back(S[i]);
                }
            }

            result.push_back(alpha);
            result.push_back(numeric);
            result.push_back(special);

            return result;
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

        vector<string> result = ob.splitString(S);

        for(int i = 0; i < result.size(); i++)
        {
            if(result[i] == "")
            {
                cout<<"-1"<<"\n";
            }

            else
            {
                cout<<result[i]<<"\n";
            }
        }
    }

    return 0;
}