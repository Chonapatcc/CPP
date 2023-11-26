#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,v1,v2,t=0;
    cin >> x1>>x2>> v1>>v2;

    while(x1<x2)
    {
        x1+=v1;
        x2+=v2;
        t++;
        //cout << x1 << " " << x2 << " " << t << endl;
    }
    cout << t;
}