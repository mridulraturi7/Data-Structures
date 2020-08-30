/*
    Third Largest Element.
*/

#include<iostream>

using namespace std;

int findThirdLargest(int array[], int n);

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

        int res = findThirdLargest(array, n);

        cout<<res<<endl;
    }

    return 0;
}

int findThirdLargest(int array[], int n)
{
    int max1 = 1, max2 = 0, max3 = 0;
    int i1, i2;

    if(n < 3)
        return -1;

    //Find the largest element.
    for(int i = 0; i < n; i++)
    {
        if(array[i] > max1)
        {
            max1 = array[i];
            i1 = i;
        }
    } 
    array[i1] = 0;

    //Find second largest element.
    for(int i = 0; i < n; i++)
    {
        if(array[i] > max2)
        {
            max2 = array[i];
            i2 = i;
        }
    }
    array[i2] = 0;

    //Third Largest Element
    for(int i = 0; i < n; i++)
    {
        if(array[i] > max3)
        {
            max3 = array[i];
        }
    }

    return max3;
}