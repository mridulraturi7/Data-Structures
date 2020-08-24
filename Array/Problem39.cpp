/*
    Binary Array Sorting
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        vector<int> vec(n);
        for(int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }

        int countZero = 0;
        for(int i = 0; i < n; i++)
        {
            if(vec[i] == 0)
            {
                countZero++;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(i < countZero)
            {
                vec[i] = 0;
            }
            else
            {
                vec[i] = 1;
            }
            
        }

        for(int i = 0; i < n; i++)
        {
            cout<<vec[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}