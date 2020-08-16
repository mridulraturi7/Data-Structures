/*
    Display Longest Name.
*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int testCase;
	cin>>testCase;
	
	while(testCase-- != 0)
	{
	    int n;
	    cin>>n;
	    
	    string maxString = "", array[10];
	    int length[10] = { 0 };
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin>>array[i];
	    }
	    
	    for(int i = 0; i < n; i++)
	    {
	        length[i] = array[i].length();
	    }
	    
	    int max = length[0], maxIndex = 0;
	    for(int i = 1; i < n; i++)
	    {
	        if(length[i] > max)
	        {
	            max = length[i];
	            maxIndex = i;
	        }
	    }
	    
	    cout<<array[maxIndex]<<endl;
	    
	}
	
	return 0;
}