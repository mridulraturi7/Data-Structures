/*
    Compete the skills.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/compete-the-skills/0
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int friend1[3], friend2[3], score1 = 0, score2 = 0;

        for(int i = 0; i < 3; i++)
        {
            cin>>friend1[i];
        }

        for(int i = 0 ; i < 3; i++)
        {
            cin>>friend2[i];
        }

        for(int i = 0 ; i < 3; i++)
        {
            if(friend1[i] > friend2[i])
            {
                score1++;
            }
            
            if(friend2[i] > friend1[i])
            {
                score2++;
            }
        }

        cout<<score1<<" "<<score2<<endl;
    }

    return 0;
}