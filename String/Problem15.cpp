/*
    C++ Strings.
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

        str1.length() >= str2.length() ? cout<<str1.length() : cout<<str2.length();
        cout<<endl;

        str1 += str2;
        cout<<str1<<endl;
    }

    return 0;
}