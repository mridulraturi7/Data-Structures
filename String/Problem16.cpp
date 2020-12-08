/*
    Count type of Characters.
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

        int count_upper = 0, count_lower = 0, count_numeric = 0, count_special = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(isupper(str[i]))
            {
                count_upper++;
            }

            else if(islower(str[i]))
            {
                count_lower++;
            }

            else if(isdigit(str[i]))
            {
                count_numeric++;
            }

            else
            {
                count_special++;
            }
        }

        cout<<count_upper<<endl;
        cout<<count_lower<<endl;
        cout<<count_numeric<<endl;
        cout<<count_special<<endl;
    }

    return 0;
}