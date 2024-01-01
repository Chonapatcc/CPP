#include <bits/stdc++.h>
using namespace std;

long long int s(long long int r,long long int n)
{
    if(n==0)
    {
        return 0;

    }
    else if(r==n)
    {
        return 1;
    }
    else if(n==1)
    {
        long long int sum=1;
        for(long long int i =2 ; i<r; i++)
        {
            sum*=i;
        }
        return sum;
    }
    else
    {
       return s(r-1, n-1) + (r-1) * s(r-1, n);
    }
    
    
}

int main()
{
    long long int a,b;
    cin>>a>>b;
    cout << s(a,b);
}