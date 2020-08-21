/*
    Replace all 0's with 5.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int convertFive(int);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;
        cout<<convertFive(n)<<endl;
    }

    return 0;
}

int convertFive(int n)
{
    int array[5];
    int i = 0;

    while(n != 0)
    {
        int rem = n % 10;
        if(rem == 0)
        {
            rem = 5;
        }
        array[i] = rem;
        i++;
        n /= 10;
    }

    //Now we have digits of the number replaced but are in reverse order.
    int num = 0;
    for(int j = i - 1; j >= 0; j--)
    {
        num = (num * 10) + array[j];
    }

    return num;
}