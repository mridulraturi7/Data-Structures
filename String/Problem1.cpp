/*
    Convert string to lower case.
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