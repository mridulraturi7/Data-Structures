/*
    Rock Paper Scissors.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/rock-paper-scissors/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>
#include<string>

using namespace std;

string findTheWinner(string str)
{
    //If there is rock and scissors
    if((str[0] == 'R' && str[1] == 'S') || (str[0] == 'S' && str[1] == 'R'))
    {
        return str[0] == 'R' ? "A" : "B";
    }

    //If there is rock and paper
    if((str[0] == 'R' && str[1] == 'P') || (str[0] == 'P' && str[1] == 'R'))
    {
        return str[0] == 'P' ? "A" : "B";
    }

    //If there is scissors and paper
    if((str[0] == 'S' && str[1] == 'P') || (str[0] == 'P' && str[1] == 'S'))
    {
        return str[0] == 'S' ? "A" : "B";
    }

    return "DRAW";
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<findTheWinner(str)<<endl;
    }

    return 0;
}