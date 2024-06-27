#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space , star;
    for(int i = 2;i<=n+1;i++)
    {
        for(int y=1;y<=i;y++)
        {
            star=y*2-1;
            space=(n+1)-y;
            for(int z=0;z<space;z++)
            {
                cout << " ";
            }
            for(int z=0;z<star;z++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    for(int z=0;z<n;z++)
    {
        cout << " ";
    }
    cout <<"|" << endl;
    for(int z=0;z<n;z++)
    {
        cout << "=";
    }
    cout <<"V" ;
    for(int z=0;z<n;z++)
    {
        cout << "=";
    }


}