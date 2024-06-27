#include <bits/stdc++.h>
using namespace std;

int main()
{
    int money,time1,time2;
    cin >> money>>time1>>time2;

    int dif=time2-time1;
    
    for(int i =1 ; i<= dif;i++)
    {
        if(money<=0)
        {
            break;
        }
        money-=i;
    }
    if(money>0)
    {
        cout << money;
    }
    else
    {
        cout << "Krit was arrested";
    }
}