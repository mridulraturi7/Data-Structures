/*
    Sum of numbers in string.
*/

#include<iostream>
#include<string>

using namespace std;

int calculateSum(string str)
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

        cout<<calculateSum(str)<<endl;
    }

    return 0;
}