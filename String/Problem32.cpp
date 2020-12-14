/*
    The Counting Game.
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

        int count = 1;

        for(int i = 0; i < str.length(); i++)
        {
            if(isupper(str[i]))
            {
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}