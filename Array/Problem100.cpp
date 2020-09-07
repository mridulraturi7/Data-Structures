/*
    Find duplicates under given constraints.
*/

#include<iostream>
using namespace std;

int main() {
	int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        long array[10];
        for(int i = 0; i < 10; i++)
        {
            cin>>array[i];
        }

        if(array[3] == array[4])
        {
            cout<<array[3];
        }
        
        else
        {
            cout<<array[5];
        }
        
        cout<<endl;
    }
    
	return 0;
}