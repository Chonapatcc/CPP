#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    string op;
    cin>>a>>op>>b;

    string oparr[6]={"+","-","x","/","mod","^"};
    double cal[6]={a+b,a-b,a*b,a/b,fmod(a,b),pow(a,b)};
    for(int i =0 ; i< 6 ; i++)
    {
        if( op== oparr[i])
        {
            cout <<fixed<<setprecision(2)<< a << " " << op << " " << b << " = " << cal[i];
            exit(0);
        }
    }
    cout << "Unknown Command";
}