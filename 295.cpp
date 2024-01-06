#include <bits/stdc++.h>
using namespace std;
long double modu(long double a)
{
    long double mod=1000000007;
    int x= a/mod;
    a-=mod*x;

    return a;

}
int main()
{
    long double a[10];
    cin>>a[0]>>a[1];
    long double mod=1000000007;


    a[0]=log10l(a[0]);
    a[2]=a[0]*a[1];

    a[2] = fmod(a[2],mod);

    string x = to_string(a[2]);
    long long int x2= a[2];
    //cout << x;
    cout  << x2+1;

    

  

}