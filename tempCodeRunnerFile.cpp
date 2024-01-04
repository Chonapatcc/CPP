#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a;
    long long int  b;
    cin>>a>>b;
    
    a=log10l(a);
    
    long long int mod = 1000000007 ;
    long long int dif = ceil(b*a);
    //cout << b << endl << a <<endl;
    

    cout << dif%mod;
}