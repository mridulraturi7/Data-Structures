/*
    Count the numbers.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/count-the-numbers/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

bool checkNumber(int num);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, count = 0;
        cin>>n;

        for(int i = 1; i <= n; i++)
        {
            bool check = checkNumber(i);

            if(check == true)
            {
                ++count;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}

bool checkNumber(int num)
{
    while(num != 0)
    {
        int digit = num % 10;

        if(digit != 1 && digit != 2 && digit != 3 && digit != 4 && digit != 5)
        {
            return false;
        }

        num = num / 10;
    }

    return true;
}