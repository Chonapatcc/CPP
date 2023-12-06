#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ip;
    cin >> ip;
    char ls[]={'I','V','X','L','C','D','M'};
    int ls2[]={1,5,10,50,100,500,1000};

    int n1,n2,sum=0;
    for(int i =1 ; i< ip.length();i++)
    {
        for(int y=0 ; y<7 ; y++)
        {
            if(ls[y]==ip[i])
            {
                n1=ls2[y];
            }
            if(ls[y]==ip[i-1])
            {
                n2=ls2[y];
            }
        }
        if(n1>n2)
        {
            sum+=-n2;
        }
        else
        {
            sum+=n2;
        }
        if(i==ip.length()-1)
        {
            sum+=n1;
        }
    }
    cout << sum;
}