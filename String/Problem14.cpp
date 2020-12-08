/*
    Count the alphabets.
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

        int count_alpha = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if(isalpha(str[i]))
            {
                count_alpha++;
            }
        }

        cout<<count_alpha<<endl;
    }

    return 0;
}