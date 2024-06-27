#include <bits/stdc++.h>
using namespace std;

int main()
{
    double p,a,r=4,n=1,t=4;
    cin>>p;

    for(int i =0; i <5; i++)
    {
        p=p+p*4/100;
    }
    cout << fixed << setprecision(2)<<p;
}