/*
    Convert a list of characters into a string.
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string chartostr(char ch[], int n)
        {
            string result;
            for(int i = 0; i < n; i++)
            {
                result += ch[i];
            }

            return result;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        char *ch = new char[n];
        for(int i = 0; i < n; i++)
        {
            cin>>ch[i];
        }

        Solution ob;
        cout<<ob.chartostr(ch, n)<<endl;
    }

    return 0;
}