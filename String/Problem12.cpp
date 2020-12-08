/*
    Display longest name.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        vector<string> list;
        for(int i = 0; i < n; i++)
        {
            string str;
            cin>>str;
            list.push_back(str);
        }

        int max_length = 0;
        string max_length_string;

        for(int i = 0; i < n; i++)
        {
            int current_length = list[i].length();
            if(current_length > max_length)
            {
                max_length = current_length;
                max_length_string = list[i];
            }
        }

        cout<<max_length_string<<endl;
    }

    return 0;
}