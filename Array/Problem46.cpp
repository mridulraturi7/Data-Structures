/*
    Find triplets with zero sum.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>

using namespace std;

bool checkTripletsSum(int *array, int n)
{
    sort(array, array + n);

    for(int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;

        while(l < r)
        {
            int sum = array[i] + array[l] + array[r];
            if(sum < 0)
            {
                l++;
            }

            else if(sum > 0)
            {
                r--;
            }

            else
            {
                return true;
            }
        }
    }

    return false;
}

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

        bool res = checkTripletsSum(array, n);

        if(res)
        {
            cout<<"1"<<endl;
        }

        else
        {
            cout<<"0"<<endl;
        }
        
    }
    return 0;
}