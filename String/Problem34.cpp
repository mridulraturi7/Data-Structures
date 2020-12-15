/*
    Confused Pappu.
*/

#include<iostream>
#include<string>

using namespace std;

int calculateDifference(string str)
{
    int actual_amount = stoi(str);
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '6')
        {
            str[i] = '9';
        }
    }

    int max_amount = stoi(str);

    return (max_amount - actual_amount);
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<calculateDifference(str)<<endl;
    }

    return 0;
}