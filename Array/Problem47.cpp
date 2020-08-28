/*
    Last index of 1.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/last-index-of-1/0
    Difficulty - Basic
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
	{
	    string str;
	    cin>>str;
	    
	    int index = -1;
	    
	    for(int i = (str.length() - 1); i >= 0; i--)
	    {
	        if(str[i] == '1')
	        {
	            index = i;
	            break;
	        }
	    }
	    
	    cout<<index<<endl;
	}

    return 0;
}