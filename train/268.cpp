#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=1 ; i<=10 ; i++)
    {
        for(int y =0 ; y<  i ; y++)
        {
            cout << "*";
        }
        cout <<endl;
    }
    for(int i=0 ;i < a; i++)
    {
        for(int y =0 ;y<3; y++)
        {
            cout << "*";
        }
        cout <<endl;
    }
    
}