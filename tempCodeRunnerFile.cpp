#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int le=a.length();
    char list1[]={'s','x','z'},achar=a[le-1],achar0=a[le-2];
    string list2[]={"sh","ch"},astring="";
    astring+=achar0+achar;

    bool ch=false;
    
    for(int i = 0; i <3;i++)
    {
        if(achar==list1[i])
        {
            ch=true;
            break;
        }
    }
    for(int i =0 ; i <2;i++)
    {
        if(astring==list2[i])
        {
            ch=true;
            break;
        }
    }

    string vowel="aeiou";
    bool bey=true;
    for(int i =0;i<5;i++)
    {
        if(vowel[i]==achar0)
        {
            bey=false;
            break;
        }
    }



    if(ch)
    {
        cout << a+"es";
    }
    else if(achar=='y' and bey)
    {
        a[le-1]='i';
        cout << a+"es";
    }
    else
    {
        cout << a+"s";
    }
}