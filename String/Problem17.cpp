/*
    Reversing the vowels.
*/

#include<iostream>
#include<string>

using namespace std;

string reverseVowels(string str)
{
    int l = 0, r = str.length() - 1;

    while(l < r)
    {
        if((str[l] == 'a' || str[l] == 'e' || str[l] == 'i' || str[l] == 'o', str[l] == 'u') && (str[r] == 'a' || str[r] == 'e' || str[r] == 'i', str[r] == 'o', str[r] == 'u'))
        {
            char temp;
            temp = str[l];
            str[l] = str[r];
            str[r] = temp;
        }

        else if(str[l] != 'a' && str[l] != 'e' && str[l] != 'i' && str[l] != 'o' && str[l] != 'u')
        {
            l++;
        }

        else if(str[r] != 'a' && str[r] != 'e' && str[r] != 'i' && str[r] != 'o' && str[r] != 'u')
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