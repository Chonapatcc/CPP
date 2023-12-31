#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);

    int x=a[a.length()-1]-'0',y=b[b.length()-1]-'0';
    
    for(int i =1 ; i <=x;i++)
    {
        for(int z =0 ;z<i  ;z++)
        {
            for(int y0 = 0 ;y0<x-i ; y0++)
            {
                cout << " ";
            }
            for(int y =0 ; y< i ;y++)
            {
                cout << " *" ;
            }
            cout << "\n";
        }
        
    }
    for(int j= 0 ; j<y ;j++)
    {
        for(int i =0 ; i<x*2+1 ; i++)
        {
            cout << '*' ;
        }
        cout << "\n";
    }

}