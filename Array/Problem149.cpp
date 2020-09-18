/*
    Fibonacci in the Array.
*/

#include<iostream>
#include<math.h>

using namespace std;

class Solution
{
    public:
        int checkFib(long long array[], int N)
        {
            int count = 0;
            for(int i = 0; i < N; i++)
            {
                bool isFib = isFibNumber(array[i]);
                if(isFib)
                {
                    count++;
                }
            }

            return count;
        }

        bool isFibNumber(int num)
        {
            long long n1 = (5 * num * num) + 4;
            long long n2 = (5 * num * num) - 4;

            return isPerfectSquare(n1) || isPerfectSquare(n2);
        }

        bool isPerfectSquare(int x)
        {
            int sq_root = sqrt(x);

            return (sq_root * sq_root == x);
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

        long long *array = new long long[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        Solution s;
        cout<<s.checkFib(array, n)<<endl;
    }

    return 0;
}