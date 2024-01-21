#include <bits/stdc++.h>
using namespace std;


int main()
{
    double p[3] = {0.12,0.5,0.06};
    double h[3]={};
    scanf("tv:%lf\n",&h[0]);
    scanf("iron:%lf\n",&h[1]);
    scanf("lamp:%lf",&h[2]);
    double price=0;
    for(int i =0 ; i< 3; i ++)
    {
        price+=h[i]*p[i]*3;
    }

    cout << price;

}