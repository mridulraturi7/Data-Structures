/*
    Change the string.
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
        string str;
        cin>>str;

        if(isupper(str[0]))
        {
            for(int i = 0; i < str.length(); i++)
            {
                if(islower(str[i]))
                {
                    str[i] = str[i] - 32;
                }
            }
        }

        else
        {
            for(int i = 0; i < str.length(); i++)
            {
                if(isupper(str[i]))
                {
                    str[i] = str[i] + 32;
                }
            }
        }

        cout<<str<<endl;
    }

    return 0;
}