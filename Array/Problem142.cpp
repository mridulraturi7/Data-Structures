/*
    Tiger Zinda Hai.
*/

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        string *array = new string[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        unordered_map<string, int> hash;
        for(int i = 0; i < n; i++)
        {
            if(array[i] == "END")
            {
                for(int j = 0; j < i; j++)
                {
                    hash[array[j]] = 0;          
                }
            }

            else
            {
                hash[array[i]]++;
            }
        }

        int tabs = 0;

        for(auto i : hash)
        {
            if((i.second % 2) != 0)
            {
                tabs++;
            }
        }

        cout<<tabs<<endl;
        
    }

    return 0;
}