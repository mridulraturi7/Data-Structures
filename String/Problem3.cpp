/*
    Palindrome String.
*/

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        int isPalindrome(string S)
        {

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
        cout<<ob.isPalindrome(S)<<endl;
    }

    return 0;
}