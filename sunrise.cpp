#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d,m;
    cin >> d>>m;
    m-=543;
    if(d==2)
    {
       
        if(m%400==0)
        {
            cout <<29;

        }
        else if(m%4==0 and m%400!=0)
        {
            cout << 29;
        }
        else
        {
            cout << 28;
        }
    }
    else
    {
        int m30[4]={4, 6, 9 ,11};
        bool ch=true;
        for(int i =0 ; i< 4;i ++)
        {
            if (d==m30[i])
            {
                ch=false;
            }
        }
        if(ch)
        {
            cout <<31;
        }
        else
        {
            cout <<30;
        }
    }

}