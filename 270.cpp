#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin>>m;
    double max=0;
    for(double i =0 ; i<= m ;i+=0.2)
    {
        double a=i;
        double b=(m-i)/2.0;
        if(a*b>max)
        {
            max= a*b;
        }
        //cout <<a<<" " << b<<" " << max <<endl;
        
    }
    
    if((int)max==max or m==4)
    {
        cout << max;
        
    }
    else
    {
        printf("%.2lf",max);
    }
}