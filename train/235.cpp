#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int c=0;
    int sc=1;
    string temp="";
    for(int i =0 ; i<a.length() ;i++)
    {
        if(isupper(a[i]))
        {
            if(temp=="")
            {
                temp+=a[i];
                continue;
            } 
            //cout << temp << sc<<endl;
            c+=sc;
            temp="";
            temp+=a[i];
            sc=1;
           
        }
        else if (isdigit(a[i]))
        {
            sc=a[i]-'0';
        }
        else
        {
            temp+=a[i];
        }
    }
    if(temp!="")
    {
        c+=sc;
    }
    
    cout << c;
}