/*
    Countries at War.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/countries-at-war/0
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int countryA[n], countryB[n];
        for(int i = 0; i < n; i++)
        {
            cin>>countryA[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin>>countryB[i];
        }

        int countA = 0, countB = 0;
        for(int i = 0; i < n; i++)
        {
            if(countryA[i] > countryB[i])
            {
                countA++;
            }

            else if(countryA[i] < countryB[i])
            {
                countB++;
            }
        }

        cout<<countA<<" "<<countB<<" ";

        if(countA > countB)
        {
            cout<<"A";
        }

        else if(countA < countB)
        {
            cout<<"B";
        }

        else
        {
            cout<<"DRAW";
        }

        cout<<endl;
    }

    return 0;
}