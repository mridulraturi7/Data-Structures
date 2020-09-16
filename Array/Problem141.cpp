/*
    Remove duplicates from unsorted array.
*/

#include<iostream>
#include<algorithm>
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

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        sort(array, array + n);

        vector<int> vec;
        for(int i = 0; i < n - 1; i++)
        {
            if(array[i] != array[i + 1])
            {
                vec.push_back(array[i]);
            }
        }

        vec.push_back(array[n - 1]);

        for(int i = 0; i < vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}