#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b;
    cin >> a >>b;
    if(a==b)
    {
        cout <<'E';
    }
    else if (a>b)
    {
        cout << a; 
    }
    else 
    {
        cout << b;
    }

}