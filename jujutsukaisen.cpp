#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s,y;
    cin >> s >> y;
    double f=1/s+1/y;
    f=1/f;
    cout << fixed<< setprecision(2) << f << " cm" << endl;
    if(f>0)
    {
        cout << "เลนส์นูน";
    }
    else
    {
        cout << "เลนส์เว้า";
    }
}