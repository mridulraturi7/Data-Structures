/*
    Count Even Substrings.
*/

#include<iostream>
#include<string>

using namespace std;

int countEvenSubstrings(string str)
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

        cout<<countEvenSubstrings(str)<<endl;
    }

    return 0;
}