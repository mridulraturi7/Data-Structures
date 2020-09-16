/*
    Stable Sort and Position.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int getIndexInSortedArray(int array[], int n, int initial_index)
        {
            int index;

            for(int i = 0; i < n; i++)
            {
                if(array[i] < array[initial_index] || (array[i] == array[initial_index] && i < initial_index))
                {
                    index++;
                }
            }

            return index;

        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, initial_index;
        cin>>n>>initial_index;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        Solution s;
        cout<<s.getIndexInSortedArray(array, n, initial_index)<<endl;

    }

    return 0;
}