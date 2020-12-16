/*
    Check if a string is Isogram or not.
*/

#include<iostream>
#include<string>

using namespace std;

bool isIsogram(string str)
{
    
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