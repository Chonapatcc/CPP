#include <bits/stdc++.h>
using namespace std;

int main()
{
    double p1,p2,d1,d2;
    cin >> p1 >> p2 >> d1 >>d2;
    int c1=0;

    while(p1>0 and p2>0)
    {
        c1++;
        
        if(c1%3==0)
        {
            p2-=d1*1.5;
        }
        else
        {
            p2-=d1;
        }
        if(p2<=0)
        {
            break;
        }
        p1-=d2;
    }
    if(p1>0)
    {
        cout << "You Win";
    }
    else
    {
        cout << "You Lose";
    }
}