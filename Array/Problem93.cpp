/*
    Array of alternate +ve and -ve numbers.
*/

#include <iostream>
#include <vector>

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

        vector<int> positive, negative;
        for(int i = 0; i < n; i++)
        {
            if(array[i] >= 0)
            {
                positive.push_back(array[i]);
            }

            else
            {
                negative.push_back(array[i]);
            }
        }
        
        int pos = 0, neg = 0;

        int minSize = (positive.size() < negative.size()) ? positive.size() : negative.size();
        
        for(int i = 0; i < minSize; i++)
        {
            cout<<positive[i]<<" "<<negative[i]<<" ";
        }
        
        if(minSize == positive.size())
        {
            for(int i = minSize; i < negative.size(); i++)
            {
                cout<<negative[i]<<" ";
            }
        }
        
        else
        {
            for(int i = minSize; i < positive.size(); i++)
            {
                cout<<positive[i]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}