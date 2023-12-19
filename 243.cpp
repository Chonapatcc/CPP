#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,ex=0,sum=0;
    cin>>a;
    
    while(a>0)
    {
        int x=a%10;
        if(x)
        {
            sum+=pow(2,ex);
        }
        ex++;
        a/=10;
    }
    cout << sum;

}