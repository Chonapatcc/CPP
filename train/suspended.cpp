#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin >> a;
    b=a;
    int le=a.length();
    char list1[]={'s','x','z'},achar=a[le-1],achar0=a[le-2];



    bool ch=false;
    
    for(int i = 0; i <3;i++)
    {
        if(achar==list1[i])
        {
            ch=true;
            break;
        }
    }
    if(achar0=='s' and achar=='h' or achar0=='c' and achar=='h')
    {
        ch=true;
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
        a+="es";
    }
    else if(achar=='y' and bey)
    {
        a[le-1]='i';
        a+="es";
    }
    else
    {
        a+="s";
    }
    cout<<b<<" -> "<<a;
}