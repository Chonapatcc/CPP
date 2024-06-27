#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;
    double x;
    int y;
    x=sqrt(a);
    y=x;
    if(x==y)
    {
        cout << "Integer";
    }
    else
    {
        cout << "Float";
    }
}