/*
    Total distance travelled in an array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/total-distance-travelled-in-an-array/0
    Difficulty - Basic
*/

#include<iostream>
#include<cstdlib>

using namespace std;

class Solution
{
    public:
        long long distance(int array[], int n)
        {
            int *hash = new int[n + 1] ();

            for(int i = 0; i < n; i++)
            {
                hash[array[i]] = i;
            }
    
            long long distance = 0;

            for(int i = 1; i < n; i++)
            {
                distance += abs(hash[i] - hash[i + 1]);
            }

            return distance;
        }
};

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
        
        Solution s;

        cout<<s.distance(array, n)<<endl;
    }

    return 0;
}