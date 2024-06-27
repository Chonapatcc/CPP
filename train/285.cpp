#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    string t;
    cin>> a>>t;

    if(a<0)
    {
        cout <<"Error because the numerical value you entered is invalid.";
    }
    else if(t=="mA")
    {
        cout << a<<t<<" = "<<a*0.001<<"A";
    }
    else if(t=="A")
    {
        cout << a<<t<<" = "<<a/0.001<<"mA";
    }
    else
    {
        cout <<"Error because the unit you entered is invalid.";
    }
}