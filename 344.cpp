#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    cin >> h >> m ;
    m += h*60;
    if(m<=15)
    {
        m-=15;
    }
    double  price=0;
    if(m+15<=2*60 and m>0)
    {
        price +=10;
        m+=15;
        m-=2*60;
    }
    if(m>0)
    {
        price += 10*ceil(m/60);
    }

    printf("%.2lf",price );
}
