#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    scanf("%lf,%lf",&a,&b);

    int ch1=0,ch2=0;

    if(a>0)
    {
        ch1=1;
    }
    if(b>0)
    {
        ch2=1;
    }
    string quad="";
    if(ch1)
    {
        if(ch2)
        {
            quad ="I";
        }
        else
        {
            quad ="IV";
        }
    }
    else
    {
        if(ch2)
        {
            quad = "II";
        }
        else
        {
            quad = "III";
        }
    }

    if(a ==0 and b==0)
    {
        printf("Point(%.2lf, %.2lf) is the origin point",a,b);

    }
    else if (a==0)
    {
        printf("Point(%.2lf, %.2lf) is on y axis",a,b);
    }
    else if (b==0)
    {
        printf("Point(%.2lf, %.2lf) is on x axis",a,b);

    }
    else
    {
        printf("Point(%.2lf, %.2lf) is on Quadrant ",a,b);
        cout << quad;
    }
    
}