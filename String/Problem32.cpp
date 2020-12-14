/*
    The Counting Game.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/the-counting-game/0/?category[]=Strings&difficulty[]=-1&page=1&query=category[]Stringsdifficulty[]-1page1#
    Difficulty - Basic
*/



int countWords(string str)
{
    int count = 1;

    for(int i = 0; i < str.length(); i++)
    {
        if(isupper(str[i]))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string str;
        cin>>str;

        cout<<countWords(str)<<endl;
    }

    return 0;
}