#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;

    double re1 = a+c ,re2 = b+d;

    cout <<"A + B = ";
    if(re1==0 and re2==0)
    {
        cout << "0.0";
    }
    else if(re1==0)
    {
        cout <<fixed <<setprecision(1)<<re2 <<"i";
    }
    else if(re2==0)
    {
        cout <<fixed <<setprecision(1)<<re1;
    }
    else 
    {
        char x;
        if(re2>=0)
        {
            x='+';
        }
        else
        {
            x= '-';
        }

        cout <<fixed <<setprecision(1)<<re1 << " " << x<<" " <<abs(re2)<<'i';
    }
}