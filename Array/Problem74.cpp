/*
    Count Possible Triangles.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/count-possible-triangles/0
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>

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

        sort(array, array + n);

        int count = 0;

        for(int i = n - 1; i > 1; i--)
        {
            //Traversing in reverse to fix the third side of the triangle.
            int l = 0, r = i - 1;
            while(l < r)
            {
                int sum = array[l] + array[r];
                if(sum > array[i])
                {
                    count = count + (r - l);
                    r--;
                }
                
                else
                {
                    l++;
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;
}