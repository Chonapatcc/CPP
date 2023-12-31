#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x,y,z,m;
    cin >>x>>y>>z>>m;

    int dif=z/(x+y),dif2=z%(x+y);

    cout << (x*dif+dif2)*m<<endl;
    if(x+y>z )
    {
        printf("Get %d free",x+y-z);
    }
    else if(z-(x+y)==x)
    {
        printf("Get %d free",x);
    }
}