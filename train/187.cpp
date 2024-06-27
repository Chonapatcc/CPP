#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,c;
    int b;
    cin>>a>>b;
    if(b<65)
    {
        c="Free";
    }
    else if(b>=65 and b<=120)
    {
        c="120";
    }
    else
    {
        c="199";
    }
    cout << a<<": " << c;
}