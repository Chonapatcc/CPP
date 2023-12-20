#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,h;

    cin>>a>>b>>h;

    double ans=h/3*(a*a+a*b+b*b);
    printf("%.6f",ans); 
}