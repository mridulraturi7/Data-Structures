/*
    Total distance travelled in an array.
*/

#include<iostream>
#include<cstdlib>
#include<map>

using namespace std;

class Solution
{
    public:
        long long distance(int array[], int n)
        {
            map<int, int> indexMap;
            for(int i = 0; i < n; i++)
            {
                indexMap[array[i]] = i;
            }

            long long distance = 0;

            int count = 0;

            int a, b;

            for(auto i : indexMap)
            {
                if(count % 2 == 0)
                {
                    a = i.second;
                }

                if(count % 2 != 0)
                {
                    b = i.second;
                }

                if(count >= 1)
                {
                    distance += abs(a - b);
                }

                count++;
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