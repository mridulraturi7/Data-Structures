/*
    Operating an Array.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/operating-an-array/1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

bool searchEle(int a[],int x);
bool insertEle(int a[],int y,int yi);
bool deleteEle(int a[],int z);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int a[100];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int x, y, yi, z;
        cin>>x>>y>>yi>>z;

        bool b = searchEle(a, x);
        if(b == true)
        {
            cout<<"1 ";
        }

        else
        {
            cout<<"0 ";
        }

        b = insertEle(a, y, yi);
        if(b)
        {
            if(a[yi] == y)
            {
                cout<<"1 ";
            }

            else
            {
                cout<<"0 ";
            }
            
        }

        else
        {
            cout<<"0 ";
        }

        b = deleteEle(a, z);
        if(b)
        {
            if(!searchEle(a, z))
            {
                cout<<"1 ";
            }

            else
            {
                cout<<"0 ";
            }
            
        }

        else
        {
            cout<<"0 ";
        }

        cout<<endl;        
    }
}

bool searchEle(int a[],int x)
{
    for(int i = 0; i < 100; i++)
    {
        if(a[i] == x)
        {
            return true;
        }
    }
    
    return false;
}

bool insertEle(int a[],int y,int yi)
{
    if(yi < 100)
    {
        a[yi] = y;
        return true;
    }
    
    return false;
}

bool deleteEle(int a[],int z)
{
    return true;
}