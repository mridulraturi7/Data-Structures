/*
    Extract the integers.
*/

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class Solution
{
    public:
        void extractIntegers(string str)
        {
            string digit = "";
            int count = 0;
            for(int i = 0; i < str.length(); i++)
            {
                if(isdigit(str[i]))
                {
                    for(int j = i; isdigit(str[j]); j++)
                    {
                        digit += str[j];
                        count++;
                        i = j;
                    }
                    digit += ' ';
                }
            }

            if(count > 0)
            {
                cout<<digit<<endl;
            }

            else
            {
                cout<<"No Integers"<<endl;
            }  
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    cin.ignore();

    while(testCase-- != 0)
    {
        string str;
        getline(cin, str);

        Solution ob;

        ob.extractIntegers(str);

        cout<<endl;
    }

    return 0;
}