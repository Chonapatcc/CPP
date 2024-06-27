#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,m,s,re;

    string sign,sign2;
    cin >>a >> b>> m>>s>>sign;
    if(a<b)
    {
        sign2="Right";
    }
    else
    {
        sign2="Left";
    }

    if(sign!=sign2)
    {
        re=(m/s)+20;
    }
    else
    {
        re=(m/s)-20;
    }

    if((int)(re)==re)
    {
        cout <<re;
    }
    else
    {
        cout <<fixed << setprecision(2) << re;
    }
}