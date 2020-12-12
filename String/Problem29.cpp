/*
    Sum of numbers in string.
*/

#include<iostream>
#include<string>

using namespace std;

int findSum(string str)
{
    string digit = "0";
    int sum = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(isdigit(str[i]))
        {
            for(int j = i; isdigit(str[j]); j++)
            {
                digit += str[j];
                i = j;
            }
        }

        sum += stoi(digit);

        digit = "0";
    }

    return sum;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<findSum(str)<<endl;
    }

    return 0;
}