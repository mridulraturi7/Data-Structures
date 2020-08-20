/*
    Play with an array.
*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> formatArray(vector<int> a, int n);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;
        
        vector<int> a(n);

        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        vector<int> b(n);
        b = formatArray(a, n);

        for(int i = 0; i < n; i++)
        {
            cout<<b[i]<<" ";
        }

        cout<<endl;

    }
    return 0;
}

vector<int> formatArray(vector<int> a, int n)
{
    for(int i = 0; i < n; i += 2)
    {
        if(a[i] > a[i + 1])
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }

        else
        {
            continue;
        }
    }
    return a;
}

