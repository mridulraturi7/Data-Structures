/*
    Professor and Parties.
*/

#include<iostream>
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

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        unordered_map<int, int> hash;
        for(int i = 0; i < n; i++)
        {
            ++hash[array[i]];
        }

        bool boys_found = false;

        for(auto i : hash)
        {
            if(i.second != 1)
            {
                cout<<"BOYS"<<endl;
                boys_found = true;
                break;
            }
        }

        if(!boys_found)
        {
            cout<<"GIRLS"<<endl;
        }
    }

    return 0;
}