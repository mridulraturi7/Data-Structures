/*
    Reverse a string.
*/

#include<iostream>
#include<string>

using namespace std;

string reverseString(string str)
{
    int l = 0, r = str.length() - 1;

    while(l < r)
    {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;

        l++;
        r--;
    }

    return str;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<reverseString(str)<<endl;
    }

    return 0;
}