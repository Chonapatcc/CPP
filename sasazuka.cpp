#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string vowel="aeiou";
    char let;
    bool check;
    string tp;
    for(int i =0;i<s.length();i++)
    {
        let=s[i];
        let=tolower(let);
        check=false;
        for(int y=0;y<5;y++)
        {
            if(let==vowel[y])
            {
                check=true;
                break;
            }
        }
        if(!check)
        {
            tp.push_back(s[i]);
        }
    }
    cout << tp;
}