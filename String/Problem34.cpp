/*
    Confused Pappu.
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        int actual_amount = stoi(str);
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '6')
            {
                str[i] = '9';
            }
        }

        int max_amount = stoi(str);

        cout<<(max_amount - actual_amount)<<endl;
    }

    return 0;
}