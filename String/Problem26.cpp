/*
    Concatenate and reverse the resultant string.
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str1, str2;
        cin>>str1>>str2;

        string res;
        res = str1 + str2;

        int l = 0, r = res.length() - 1;

        while(l < r)
        {
            char temp = res[l];
            res[l] = res[r];
            res[r] = temp;

            l++;
            r--;
        }

        cout<<res<<endl;
    }

    return 0;
}