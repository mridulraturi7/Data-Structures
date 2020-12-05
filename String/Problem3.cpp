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
            int l = 0;
            int r = S.length() - 1;

            while(l < r)
            {
                if(S[l] != S[r])
                {
                    return 0;
                }

                l++;
                r--;
            }

            return 1;
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