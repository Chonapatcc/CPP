#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>> n;
    for(int y =0 ; y<n;y++)
    {
        for(int i =0 ;i < n-y-1; i++ )
        {
            cout << ' ';
        }
        cout << "/";
        
        if(y==n-1)
        {
            for(int i =0 ; i <y*2;i++ )
            {
                cout << '_';
            }
        }
        else
        {
            for(int i =0 ; i <y*2;i++ )
            {
                cout << ' ';
            }
        }
        cout << "\\" ;
        cout << endl;
    }
}