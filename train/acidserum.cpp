#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>> a;
    if(a<0)
    {
        
        if(a==-1)
        {
            cout << 'i';

        }
        else
        {
            a=-a;
            int re=sqrt(a);
            cout << "false";
        }
        
    }
    else
    {
        int re=sqrt(a);
        if(re*re==a)
        {
            cout <<re;
        }
        else
        {
            cout << "false";
        }
    }
    
}