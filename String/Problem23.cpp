/*
    Remove the vowels from a string.
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