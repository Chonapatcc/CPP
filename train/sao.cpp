#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    getline(cin,t);
    string vowel="aeiou";
    for(int i=0;i<t.length();i++)
    {
        for(int y =0 ; y<5;y++)
        {
            if(tolower(t[i])==vowel[y])
            {
                cout << t[i];
                t[i]='0';
                break;
            }
        }
    }
    cout << endl;
    for(int i = 0; i <t.length();i++)
    {
        if(t[i]!='0' and ispunct(t[i])==false and t[i]!=' ')
        {
            cout << t[i];
        }
    }
}