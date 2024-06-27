#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,t="";
    int n=0;

    cin >> a;
    
    for(int i =0 ; i <a.length();i+=2)
    {
        if(a[i+1]=='e')
        {
            t+='1';
        }
        else
        {
            t+='0';
        }
    }
    int s=0;

    for(int y=0 ; y<t.length();y+=8)
    {
        s=0;
        for(int i =y+7 ; i>=y; i--)
        {
            if(t[i]=='1')
            {
                s+=pow(2,(y+7)-i);
            }
            
        }
        printf("%c",s);

            

    }
    
    
}