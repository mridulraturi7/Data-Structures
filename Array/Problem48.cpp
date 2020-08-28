/*
    Find the odd occurrence.
*/

#include<iostream>
#include<unordered_map>

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
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        unordered_map<int, int> myMap;
        for(int i = 0; i < n; i++)
        {
            myMap[array[i]]++;
        }

        int oddOcc = 0;

        for(auto i : myMap)
        {
            if((i.second) % 2 != 0)
            {
                oddOcc = i.first;
                break;
            }
        }

        cout<<oddOcc<<endl;
    }
	return 0;
}