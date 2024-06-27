#include <bits/stdc++.h>
using namespace std;

string toupperstring(string word)
{
    int size = word.length();
    word[0] = toupper(word[0]);

    for(int i =1 ; i< size ;i ++)
    {
        word[i] = tolower(word[i]);
    }
    return word;
}

int main()
{
    string input;
    string list[100];
    int count[100];
    int index=0;
    cin>>input;
    while(input!="-1")
    {
        input = toupperstring(input);
        int ch=0;
        int i;
        for(i =0 ;i<index ;i++)
        {
            if(list[i]==input)
            {
                
                ch=1;
                break;
            }
        }
        if(ch)
        {
            count[i]++;
        }
        else
        {
            list[index] = input;
            count[index] = 1;
            index++;
        }
        cin>>input;
    }
    cout <<"Result" <<endl;
    for(int i=0 ; i<index; i++)
    {
        cout << list[i]<<": "<<count[i] <<endl;
    }
}