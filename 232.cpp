#include <bits/stdc++.h>
using namespace std;

int main()
{
        double a,b;
        char sign;
        cin >> a>>sign>>b;
        double ans;
        if(sign=='+')
        {
            ans=a+b;
        }
        else if(sign=='-')
        {
            ans=a-b;

        }
        else if(sign=='*')
        {
            ans=a*b;
        }
        else
        {
            ans=a/b;
        }

        if(sign!='/')
        {
            printf("%.0f %c %.0f = %.0f",a,sign,b,ans);
            
        }
        else
        {
            printf("%.0f %c %.0f = %.1f",a,sign,b,ans);
        }
        

}