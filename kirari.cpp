#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    double mat[a*b];
    double val;
    double low=INFINITY;
    double high=-INFINITY;
    for(int i=0;i<(a*b);i++)
    
    {
        cin >> val;
  
        mat[i]=val;
        if(val>high)
        {
            high=val;
        }
        if(val<low)
        {
            low=val;
        }
    }
    int ind=0;
    for(int i=0;i<b;i++)
    {
        for(int i2=0;i2<a;i2++)
        {
            cout << fixed << setprecision(4) << (mat[ind]-low)/(high-low) << " ";
            ind++;
        }
        cout << endl;
    }

}