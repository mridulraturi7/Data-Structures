/*
    Pythagorean Triplet.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/longest-increasing-subarray/0
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string pythagoreanTriplet(int array[], int n)
{
    sort(array, array + n);

    for(int i = n - 1; i > 1; i--)
    {
        int rhs = array[i] * array[i];
        int l = 0, r = i - 1;
        while(l < r)
        {
            int lhs = (array[l] * array[l]) + (array[r] * array[r]);
            if(lhs == rhs)
            {
                return "Yes";
            }

            else if(lhs < rhs)
            {
                l++;
            }

            else
            {
                r--;
            }
            
        }
    }
    
    return "No";
}

int main() {
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

        cout<<pythagoreanTriplet(array, n)<<endl;
    }
	return 0;
}