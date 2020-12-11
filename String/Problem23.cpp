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