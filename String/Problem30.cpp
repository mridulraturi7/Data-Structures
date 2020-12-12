/*
    Print first letter of every word in the string.
*/

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class Solution
{
    public:
        string firstAlphabet(string str)
        {
            string res, temp;

            stringstream stream(str);

            while(stream >> temp)
            {
                res.push_back(temp[0]);
            }

            return res;
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
        cout<<ob.firstAlphabet(str)<<endl;
    }

    return 0;
}