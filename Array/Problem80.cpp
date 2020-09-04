/*
    Triplet Family.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> findTriplet(int array[], int n);

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

        vector<int> res = findTriplet(array, n);

        if(res.size() != 3)
        {
            cout<<"-1"<<endl;
        }

        else
        {
            if(res[0] + res[1] == res[2])
            {
                cout<<"1\n";
            }

            else
            {
                cout<<"-1\n";
            }
        }
        
    }

    return 0;
}

vector<int> findTriplet(int array[], int n)
{
    vector<int> result;
    bool found = false;
    sort(array, array + n);
    for(int i = n - 1; i > 1; i--)
    {
        int l = 0, r = i - 1;
        while(l < r)
        {
            if(array[l] + array[r] == array[i])
            {
                result.push_back(array[l]);
                result.push_back(array[r]);
                result.push_back(array[i]);
                found = true;
                break;
            }

            else if(array[l] + array[r] > array[i])
            {
                r--;
            }

            else
            {
                l++;
            }
        }

        if(found == true)
        {
            break;
        }
    }

    return result;
}