#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r;
    cin >> n>>r;
    int x=1,y=1,z=1;
    for(int i =2 ; i<=n;i++)
    {
        x*=i;
    }
    for(int i=2;i<=r;i++)
    {
        z*=i;
    }
    for(int i =2 ;i<=(n-r);i++)
    {
        y*=i;
    }
    cout << x/(y*z);

    
}