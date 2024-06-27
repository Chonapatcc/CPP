#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    cin >> a>> b;

    double c=a/(b/100)/(b/100);
    cout << fixed << setprecision(2) << c << endl;
    string t;
    if(c<18)
    {
        t="Thin";
    }
    else if ( c<22 and c>18)
    {
        t="Good Health";
    }
    else if ( c<24 and c>23)
    {
        t="Fat Level 1";
    }
    else if ( c< 29 and c> 25) 
    {
        t="Fat Level 2";
    }
    else
    {
        t="Fat Level 3";
    }
    cout << t ;
}