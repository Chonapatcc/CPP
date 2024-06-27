#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,sum;
    
    cin >>a;
    for(int i =1;i<13;i++)
    {
        cout<<a<<" x "<<i<<" = " << a*i<<endl;
        sum+=a*i;
    }
    if(sum>999)
    {
        int x,y;
        x=sum%1000;
        y=(sum-x)/1000;
        cout << "รวม : "<<y<<","<<x<<".00";
    }
    else
    {
        cout << "รวม : "<<sum<<".00";
    }

    
}