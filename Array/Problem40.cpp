/*
    Find the fine.
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, d;
        cin>>n>>d;

        vector<int> penalty(n);
        vector<int> car(n);
        
        for(int i = 0; i < n; i++)
        {
            cin>>car[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            cin>>penalty[i];
        }

        int total_penalty = 0;

        for(int i = 0; i < n; i++)
        {
            if(d%2 == 0)
            {
                if(car[i] % 2 != 0)
                {
                    total_penalty += penalty[i];
                }
            }

            else
            {
                if(car[i] % 2 == 0)
                {
                    total_penalty += penalty[i];
                }
            }
        }
        cout<<total_penalty<<endl;
    }
	return 0;
}