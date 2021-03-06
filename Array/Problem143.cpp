/*
    Form a triangle.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/form-a-triangle/0
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>

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

        sort(array, array + n);

        int count = 0;
        for(int i = n - 1; i > 1; i--)
        {
            int l = 0, r = i - 1;
            while(l < r)
            {
                int sum = array[l] + array[r];
                if(sum > array[i])
                {
                    count += r - l;
                    r--;
                }

                else
                {
                    l++;
                }
                
            }
        }

        cout<<count<<endl;
    }
    
    return 0;
}