

#include<iostream>
#include<string>
#include<map>

using namespace std;

string removeCharacters(string s1, string s2)
{
    map<char, int> hashForString2;
    for(int i = 0; i < s2.length(); i++)
    {
        hashForString2[s2[i]] = 1;
    }

    string res;
    for(int i = 0; i < s1.length(); i++)
    {
        if(hashForString2[s1[i]] == 1)
        {
            continue;
        }

        else
        {
            res.push_back(s1[i]);
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
        string s1, s2;
        cin>>s1>>s2;

        cout<<removeCharacters(s1, s2)<<endl;
    }

    return 0;
}
