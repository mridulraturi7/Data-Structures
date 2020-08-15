/*
    Sum of Array.
*/

#include <iostream>
using namespace std;

int main() {
	int testCase;
	cin>>testCase;
	
	while(testCase-- != 0)
	{
	    int n, array[100], sum = 0;
	    cin>>n;
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin>>array[i];
	    }
	    
	    for(int i = 0 ; i < n; i++)
	    {
	        sum += array[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}