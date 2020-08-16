/*
    Fascinating Number.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/fascinating-number/0
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int num, result, array[9], check[9] = { 0 };
        cin>>num;

        string str = "Fascinating";
        int oNum = num, i = 0;

        while(num != 0)
        {
            int rem = num % 10;
            array[i] = rem;
            i++;
            num /= 10;
        }

        if(i >= 3)
        {
            int mul2 = oNum * 2;
            while(mul2 != 0)
            {
                int rem = mul2 % 10;
                array[i] = rem;
                i++;
                mul2 /= 10;
            }

            int mul3 = oNum * 3;
            while(mul3 != 0)
            {
                int rem = mul3 % 10;
                array[i] = rem;
                i++;
                mul3 /= 10;
            }

            for(int j = 0; j < i; j++)
            {
                check[array[j] - 1] = 1;
            }

            for(int j = 0; j < i; j++)
            {
                if(check[j] != 1)
                {
                    str = "Not Fascinating";
                    break;
                }
            }
        }

        else
        {
            str = "Number should be atleast three digits";
        }
        
        cout<<str<<endl;
    }

    return 0;
}