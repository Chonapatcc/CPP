#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  a;
    
    cin>>a;
    if(a%2==0)
    {
        int sum=0;
        while(a>0)
        {
            sum+=a;
            a--;
        }
        cout << sum;
    }
    else
    {
        int sum=0;
        while(a>0)
        {
            sum+=a;
            a-=2;
        }


        cout << sum;
    }
    



}