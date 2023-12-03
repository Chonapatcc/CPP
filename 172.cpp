#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t,dx,dy;
    cin >> t;
    if(t<0)
    {
        cout << "Error";
    }
    else
    {
        dx=2*t+2;
        dy=12*pow(t,2)-6;
        cout <<fixed <<  setprecision(2)<<dy/dx;
    }
    


}