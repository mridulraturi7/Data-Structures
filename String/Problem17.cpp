/*
    Reversing the vowels.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/reversing-the-vowels/0/?category[]=Strings&difficulty[]=-2&page=1&query=category[]Stringsdifficulty[]-2page1
    

*/

#include<iostream>
#include<string>

using namespace std;

string reverseVowels(string str)
{
    int l = 0, r = str.length() - 1;

    while(l < r)
    {
        if((str[l] == 'a' || str[l] == 'e' || str[l] == 'i' || str[l] == 'o' || str[l] == 'u') && (str[r] == 'a' || str[r] == 'e' || str[r] == 'i' || str[r] == 'o' || str[r] == 'u'))
        {
            char temp;
            temp = str[l];
            str[l] = str[r];
            str[r] = temp;

            l++;
            r--;
        }

        if(str[l] != 'a' && str[l] != 'e' && str[l] != 'i' && str[l] != 'o' && str[l] != 'u')
        {
            l++;
        }

        if(str[r] != 'a' && str[r] != 'e' && str[r] != 'i' && str[r] != 'o' && str[r] != 'u')
        {
            r--;
        }
    }

    return str;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        string res = reverseVowels(str);

        cout<<res<<endl;
    }

    return 0;
}