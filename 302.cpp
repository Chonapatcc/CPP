#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int sign=a/2;
    string x="";
    if(a%2==0)
    {
        x="sin x";
    }
    else
    {
        x="cos x";
    }

    if(sign%2!=0)
    {
        cout << "-";
    }
    cout << x;
}