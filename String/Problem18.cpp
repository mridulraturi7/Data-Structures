/*
    Check String.
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        bool check(string str)
        {
            for(long i = 0; i < str.length() - 1; i++)
            {
                if(str[i] != str[i + 1])
                {
                    return false;
                }
            }

            return true;
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

        bool res = ob.check(str);

        if(res)
        {
            cout<<"Yes";
        }

        else
        {
            cout<<"No";
        }

        cout<<endl;
    }

    return 0;
}