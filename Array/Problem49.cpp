/*
    Segregate even and odd numbers.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-numbers/0
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>
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

        int *array = new int[n];
        int *output = new int[n];
        vector<int> even, odd; 

        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        sort(array, array + n);

        for(int i = 0; i < n; i++)
        {
            if(array[i] % 2 == 0)
            {
                even.push_back(array[i]);
            }

            else
            {
                odd.push_back(array[i]);
            }
        }

        for(int i = 0; i < even.size(); i++)
        {
            output[i] = even[i];
        }

        for(int i = 0; i < odd.size(); i++)
        {
            output[even.size() + i] = odd[i];
        }

        for(int i = 0; i < n; i++)
        {
            cout<<output[i]<<" ";
        }

        cout<<endl;
    }

	return 0;
}