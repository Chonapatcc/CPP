#include <bits/stdc++.h>
using namespace std;

int main()
{
    int temp,a,b,c;
    string t;
    for(int i=0 ; i<3;i++)
    {
        cin >>temp;
        if(i==0)
        {
            a=temp;
        }
        else if(i==1)
        {
            if(temp<a)
            {
                b=a;
                a=temp;
            }
            else
            {
                b=temp;
            }
        }
        else
        {
            if(temp<a)
            {
                c=b;
                b=a;
                a=temp;
            }
            else
            {
                if(temp<b)
                {
                    c=b;
                    b=temp;
                }
                else
                {
                    c=temp;
                }
            }
        }
    }
    cin >> t;
    for(int i=0 ; i <3; i++)
    {
        if(t[i]=='A')
        {
            cout << a << ' ';
        }
        else if(t[i]=='B')
        {
            cout << b<<' ';
        }
        else
        {
            cout << c<<' ';
        }
    }
}