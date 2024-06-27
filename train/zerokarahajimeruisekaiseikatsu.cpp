#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    char sign;
    cin >> a >> sign >> b;
    if(sign=='+')
    {
        cout << a+b;
    }
    else if (sign=='-')
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