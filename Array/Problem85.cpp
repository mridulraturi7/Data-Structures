/*
    C++ 2-D Arrays | Set - 2.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int **matrix = new int*[n];
        for(int i = 0; i < n; i++)
        {
            matrix[i] = new int[n];
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        bool firstCol = false;

        for(int i = 0; i < n; i++)
        {
            if(matrix[i][0] == 0)
            {
                firstCol = true;
            }

            for(int j = 1; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < n; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        //For the first Row
        if(matrix[0][0] == 0)
        {
            for(int j = 0; j < n; j++)
            {
                matrix[0][j] = 0;
            }
        }

        //For the first Column
        if(firstCol)
        {
            for(int i = 0; i < n; i++)
            {
                matrix[i][0] = 0;
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}