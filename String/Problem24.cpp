/*
    Remove Spaces.
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string removeSpaces(string str)
        {
            string res;
            for(int i = 0; i < str.length(); i++)
            {
                if(str[i] != ' ')
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

    cin.ignore();

    while(testCase-- != 0)
    {
        string str;
        getline(cin, str);

        Solution ob;
        cout<<ob.removeSpaces(str)<<endl;
    }

    return 0;
}