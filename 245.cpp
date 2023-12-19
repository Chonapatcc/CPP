#include <bits/stdc++.h>
using namespace std;

int main()
{
    char sign;
    cin>>sign;

    int a,b;
    cin>>a>>b;

    if(sign=='+')
    {
        cout<<a+b;
    }
    else if(sign=='-')
    {
        cout << a-b;

    }
    else if(sign=='*')
    {
        cout << a*b;

    }
    else
    {
        cout << a/b;
    }

}