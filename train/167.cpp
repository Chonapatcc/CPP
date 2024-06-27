#include <bits/stdc++.h>
using namespace std;

int main()
{
    string alpha="abcdefghijklmnopqrstuvwxyz",num="0123456789";
    string morse[]={
    ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
    "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
    "..-","...-",".--","-..-","-.--","--..","-----",".----",
    "..---","...--","....-",".....","-....","--...","---..","----."
};
    string a;
    cin >> a;

    for(int i =0 ; i < a.length();i++)
    {
        if(isdigit(a[i]))
        {
            cout <<morse[num.find(a[i])+26];
        }
        else
        {
        cout <<morse[alpha.find(tolower(a[i]))];
        }
    }

}