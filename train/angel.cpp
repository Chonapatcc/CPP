#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,h,m;
    cin >> a;
    h=floor(a/60);
    a-=h*60;
    m=a;
    cout << h << ":" << m;   
}