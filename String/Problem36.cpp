/*
    
*/

#include<iostream>
#include<string>

using namespace std;

bool isIsogram(string str)
{
    int array[26] = {0};
    for(int i = 0; i < str.length(); i++)
    {
        array[str[i] - 'a']++;

        if(array[str[i] - 'a'] > 1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<isIsogram(str)<<endl;
    }

    return 0;
}