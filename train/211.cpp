#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    string t1="",t11="";
    bool ch=false;

    for(int i =0 ; i <a.length();i++)
    {
        if(a[i]==' ')
        {
            continue;
        }
        if(a[i]==':')
        {
            ch=true;
            continue;
        }
        if(ch)
        {
            t11+=a[i];
        }
        else
        {
            t1+=a[i];
        }
    }
    string t2="",t22="";
    ch=false;
    for(int i =0 ; i <b.length();i++)
    {
        if(b[i]==' ')
        {
            continue;
        }
        if(b[i]==':')
        {
            ch=true;
            continue;
        }
        if(ch)
        {
            t22+=b[i];
        }
        else
        {
            t2+=b[i];
        }
    }
    if(t1==t2)
    {
        if(t11==t22)
        {
            cout << "T";
        }
        else
        {
            cout << "F";
        }
    }
    else
    {
        cout << "DS";
    }

    
    

}