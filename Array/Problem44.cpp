/*
    Positive and Negative Elements.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/positive-and-negative-elements/0
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
	    
	    int *array = new int[n];
	    int *positive = new int[n/2];
	    int *negative = new int[n/2];
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin>>array[i];
	    }
	    
	    
	    int po = 0, ne = 0;
	    for(int i = 0; i < n; i++)
	    {
	        if(array[i] >= 0)
	        {
	            positive[po] = array[i];
	            po++;
	        }
	        
	        else if(array[i] < 0)
	        {
	            negative[ne] = array[i];
	            ne++;
	        }
	    }
	    
	    for(int i = 0; i < n/2; i++)
	    {
	        cout<<positive[i]<<" "<<negative[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	
	return 0;
}