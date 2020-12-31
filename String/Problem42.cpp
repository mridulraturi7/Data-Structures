
#include<iostream>
#include<string>
#include<map>

using namespace std;

string sortString(string str, int n)
{
    map<char, int> hash;
    for(int i = 0; i < n; i++)
    {
        hash[str[i]]++;
    }

    string res;

    for(auto i : hash)
    {
        while(i.second != 0)
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
        int n;
        cin>>n;

        string str;
        cin>>str;

        cout<<sortString(str, n)<<endl;
    }

    return 0;
}