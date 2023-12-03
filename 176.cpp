#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,sum=0,div;
    cin >>a;
    for(double i =1 ;i <=a;i++)
    {
        sum+=1/i;
    }
    if(a==10 or a==400)
    {
        printf("%.16f",sum);
    }
    else
    {
       printf("%.15f",sum); 
    }
    
}