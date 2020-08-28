/*
    Maximum Product of two numbers.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/maximum-product-of-two-numbers/0
    Difficulty - Basic
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
        long n;
        cin>>n;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        //Finding the two maximum numbers of the array one by one.
        int max1 = 0, max2 = 0, max_index, prod = 1;
        
        for(int i = 0; i < n; i++)
        {
            if(v[i] > max1)
            {
                max1 = v[i];
                max_index = i;
            }
        }

        v[max_index] = 0;

        for(int i = 0; i < n; i++)
        {
            if(v[i] > max2)
            {
                max2 = v[i];
            }
        }

        prod = max1 * max2;

        cout<<prod<<endl;

    }

    return 0;
}