/*
    Sort a String.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sort-a-string/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1#
    Difficulty - Basic
*/



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