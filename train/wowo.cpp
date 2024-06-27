#include <bits/stdc++.h>
using namespace std;

int main()
{
    double ip=5,sum=0,c=0;
    cin >>ip;
    while(ip>0)
    {
        sum+=ip;
        c++;
        cin >> ip;
    }
    cout << fixed << setprecision(1) << sum/c;
}