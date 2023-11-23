#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,sum=0,c=0;
    cin>>a;

    while (a>0)
    {
        sum+=a;
        c++;
        cin >>a;
        
    }
    if(c==0)
    {
        cout << "No Data";
    }
    else
    {
       cout <<fixed <<setprecision(2)<< sum/c; 
    }
    
}