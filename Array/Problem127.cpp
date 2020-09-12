/*
    Total distance travelled in an array.
*/

#include<iostream>
#include<cstdlib>

using namespace std;

class Solution
{
    public:
        long long distance(int array[], int n)
        {
            int left, right;
            
            left = find(array, n, 1);

            right = find(array, n, 2);

            long long dis = 0;

            int counter = 2;

            while(right != -1)
            {
                dis += abs(left - right);

                left = right;

                right = find(array, n, ++counter);
            }

            return dis;
        }

        int find(int array[], int n, int element)
        {
            for(int i = 0; i < n; i++)
            {
                if(array[i] == element)
                {
                    return i;
                }
            }

            return -1;
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