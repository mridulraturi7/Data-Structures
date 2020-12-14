/*
    The Counting Game.
*/

#include<iostream>
#include<string>

using namespace std;

int countWords(string str)
{
    int count = 1;

    for(int i = 0; i < str.length(); i++)
    {
        if(isupper(str[i]))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<countWords(str)<<endl;
    }

    return 0;
}