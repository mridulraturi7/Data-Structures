/*
    Remove characters from alphanumeric string.
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        
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
        cout<<ob.removeCharacters(str)<<endl;
    }

    return 0;
}