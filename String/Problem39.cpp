/*
    Sort String.
*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

string sortString(string str)
{
    map<char, int> hash;
    for(int i = 0; i < str.length(); i++)
    {
        hash[str[i]]++;
    }

    string res;
    for(auto i : hash)
    {
        while(i.second > 0)
        {
            res.push_back(i.first);
            i.second--;
        }
    }

    return res;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<sortString(str)<<endl;
    }

    return 0;
}