#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,temp="";
    getline(cin ,a);
    a+='+';

    int ls[1000],c=0;
    bool ch=true;
    for(int i =0 ;i<a.length() ; i++)
    {
        if(a[i]=='+')
        {
            ch=false;
        }
        if(ch)
        {
            temp+=a[i];
        }
        else
        {
            ls[c]=stoi(temp);
            //cout << ls[c] << endl;
            temp="";
            c++;
            ch=true;
        }
    }
    
    sort(ls,ls+c);
    for(int i =0 ; i < c ; i++)
    {
        if(i==c-1)
        {
            cout << ls[i];
        }
        else
        {
            cout <<ls[i]<<'+';    
        }
        
    }
}