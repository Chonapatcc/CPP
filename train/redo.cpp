#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,re=a;
    cin >> a >> b >>c;
    if(b>=a)
    {
        cout << "Error" ;
    }
    else
    {
        cout << ceil((c-a)/(a-b))+1;
    }
    
}