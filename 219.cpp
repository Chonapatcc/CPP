#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , prime[1000],c=0;
    cin>> a;
    bool ch=true;
    for(int i=2 ;i<=200; i++)
    {
        if(c==0)
        {
            prime[c]=i;
            c++;
            continue;
        }
        ch=true;
        for(int y =0 ; y<c;y++)
        {
            if(i%prime[y]==0)
            {
                ch=false;
                break;
            }
        }
        if(ch)
        {
            prime[c]=i;
            c++;
        }
        
    }
    ch=false;
    while(!ch)
    {   ch=true;
        for(int i=0 ; i<c ;i++)
        {
            if(a%prime[i]==0)
            {
                cout << prime[i] <<endl;
                a/=prime[i];
                ch=false;
                break;
            }
        }
        
    }


}