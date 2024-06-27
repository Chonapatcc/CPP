#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,h,m,s;
    cin>>a;
    h=a/3600;
    a-=h*3600;
    m=a/60;
    a-=m*60;
    s=a;
    printf("%d:%02d:%02d",h,m,s);
}