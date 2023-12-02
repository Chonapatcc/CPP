#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >>a;
    for(int i =a;i>0;i--)
    {
        for(int y=0;y<a-i;y++)
        {
            cout<<' ';
        }
        for(int y=0 ;y<i;y++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
    for(int i =1;i<=a;i++)
    {
        for(int y=0;y<a-i;y++)
        {
            cout<<' ';
        }
        for(int y=0 ;y<i;y++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
}
