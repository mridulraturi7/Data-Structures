/*
    Upper Case Conversion.
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    cin.ignore();

    while(testCase-- != 0)
    {
        string str;
        getline(cin, str);

        for(int i = 0; i < str.length(); i++)
        {
            if(i == 0 && str[i] != ' ')
            {
                str[i] = str[i] - 32;
            }

            if(str[i] == ' ')
            {
                while(str[i] == ' ')
                {
                    i++;
                }
                
                if(i < str.length())
                {
                    str[i] = str[i] - 32;
                }
            }
        }

        cout<<str<<endl;
    }

    return 0;
}