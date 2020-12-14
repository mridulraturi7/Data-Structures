/*
    C++ Corresponding Position in the two strings that hold exactly the same characters.
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
        string s1, s2;
        cin>>s1>>s2;

        int count = 0;
        for(int i = 0; i < s1.length(); i++)
        {
            if(tolower(s1[i]) == tolower(s2[i]))
            {
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}