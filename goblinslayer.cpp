#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    int x3,x2,x1,x0;
    x3=a*c*e;
    x2=(b*c+a*d)*e+a*c*f;
    x1=b*d*e+(b*c+a*d)*f;
    x0=b*d*f;
    cout << x3 << " " << x2 << " " << x1 << " " << x0;
}