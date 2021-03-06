/*
    Absolute Difference of 1.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/absolute-difference-1/0
    Difficulty - Basic
*/

#include <iostream>
#include <cstdlib>

using namespace std;

bool checkAbsoluteDifference(long long num);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;
        
        long long k;
        cin>>k;

        long long *array = new long long[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int result = -1;

        for(int i = 0; i < n; i++)
        {
            if(array[i] < k)
            {
                bool absolute =  checkAbsoluteDifference(array[i]);

                if(absolute)
                {
                    result = 0;
                    cout<<array[i]<<" ";
                }
                
            }
        }

        if(result == -1)
        {
            cout<<result;
        }

        cout<<endl;
    }

    return 0;
}

bool checkAbsoluteDifference(long long num)
{
    bool absolute = true;
    int size = 0;
    while(num != 0)
    {
        int rem = num%10;
        num = num / 10;

        size++;

        if(num == 0)
        {
            break;
        }
        
        int diff = abs(rem - (num % 10));
        if(diff != 1)
        {
            absolute = false;
            break;
        }
    }

    if(size == 1)
        return false;

    return absolute;
}