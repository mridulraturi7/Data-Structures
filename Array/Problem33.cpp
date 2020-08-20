/*
    Find unique element.
*/

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, k;
        cin>>n>>k;

        vector<int> v(n);
        unordered_map<int, int> frequency; 

        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        for(int i = 0; i < n; i++)
        {
            frequency[v[i]]++;
        }

        for(auto i : frequency)
        {
            if(i.second == 1)
            {
                cout<<i.first;
            }
        }

        cout<<endl;

    }

    return 0;
}