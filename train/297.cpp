#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,op;
    cin>>a>>b>>op;
    if(op==1)
    {
        cout << a+b;
    }
    else if(op==2)
    {
        cout<< a-b;
    }
    else if(op==3)
    {
        cout << a*b;
    }
    else
    {
        cout << a/b;
    }

}