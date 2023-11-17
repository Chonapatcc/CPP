#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a;
    cin >> a;
    int x,y;
    for(int i =1;i<=a;i++)
    {
        x=i*2-1;
        y=a-i;
        for(int ii=0;ii<y;ii++)
        {
            cout << " ";
        }
        for(int ii=0;ii<x;ii++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    for(int i =1;i<a;i++)
    {
        x=(a-i)*2-1;
        y=i;
        for(int ii=0;ii<y;ii++)
        {
            cout << " ";
        }
        for(int ii=0;ii<x;ii++)
        {
            cout << "*";
        }
        cout<<endl;
    }


}