#include <bits/stdc++.h>
using namespace std;
int daycal(int a)
{
    int m30[4]={4,6,9,11};
    int n1=0;
    if(a==2)
    {
        n1=28;
    }
    else
    {
        for(int i = 0; i < 4;i++)
        {
            if(a==m30[i])
            {
                n1=30;
                break;
            }
        }
        if(n1!=30)
        {
            n1=31;
        }
    }
    return n1;
}
int main()
{
    int a,a2;
    cin >> a;
    
    int n1,n2;
    if(a-1==0)
    {
        a2=12;
    }
    else
    {
        a2=a-1;
    }
    n1=daycal(a);
    n2=daycal(a2);
    int c=0;
    for(int i = 1;i<=n1;i++)
    {
        if(i==1)
        {
            if((n2+i)%a==0)
            {
                c++;
            }
        }
        else
        {
            if((i+i-1)%a==0)
            {
                c++;
            }
        }
    }
    cout << c;
    
}