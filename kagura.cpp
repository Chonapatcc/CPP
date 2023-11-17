#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,y;
    cin >> n>>m>>y;
    int a,b;
    b=(-m*y+y-n)/(1-m);
    a=b+n;
    cout << a<<" "<<b;
}