/*
    Count type of Characters.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution
{
    public:
        vector<int> count(string str)
        {
            vector<int> result;
            int count_upper = 0, count_lower = 0, count_numeric = 0, count_special = 0;
            for(int i = 0; i < str.length(); i++)
            {
                if(isupper(str[i]))
                {
                    count_upper++;
                }

                else if(islower(str[i]))
                {
                    count_lower++;
                }

                else if(isdigit(str[i]))
                {
                    count_numeric++;
                }

                else
                {
                    count_special++;
                }
            }

            result.push_back(count_upper);
            result.push_back(count_lower);
            result.push_back(count_numeric);
            result.push_back(count_special);

            return result;
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
        vector<int> res = ob.count(str);
        for(int i : res)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}