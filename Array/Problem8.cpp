/*
    Maximum and Minimum Array Element.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/maximum-and-minimum-of-array-elements/0
	Difficulty - School
*/

#include <iostream>

using namespace std;

int main() 
{
	int testCase;
	cin>>testCase;
	
	while(testCase-- != 0)
	{
	    int n, array[101], min = 99, max = 0;
	    cin>>n;
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin>>array[i];
	    }

	    for(int i = 0; i < n; i++)
	    {
	        if(array[i] > max)
	        {
	            max = array[i];
	        }
	        
	        if(array[i] < min)
	        {
	            min = array[i];
	        }
	    }
	    cout<<max<<" "<<min<<endl;
	}
	return 0;
}