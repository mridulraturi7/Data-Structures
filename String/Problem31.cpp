/*
    
*/

#include<iostream>
#include<string>

using namespace std;

int countCorrespondingPositions(string s1, string s2)
{
    int count = 0;
    for(int i = 0; i < s1.length(); i++)
    {    
        if(tolower(s1[i]) == tolower(s2[i]))
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
        string s1, s2;
        cin>>s1>>s2;

        cout<<countCorrespondingPositions(s1, s2)<<endl;
    }

    return 0;
}