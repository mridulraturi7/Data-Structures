/*
    Count of Camel Case Charaters.
*/

#include<iostream>
#include<string>

using namespace std;

int countCamelCase(string str)
{
    int count = 0;
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

        cout<<countCamelCase(str)<<endl;
    }

    return 0;
}