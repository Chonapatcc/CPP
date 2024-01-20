#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int b;
    cin>>a>>b;

    for(int i=1; i<=b;i++)
    {
        for(int y=0 ; y<i ;y++)
        {
            cout << a << ' ' ;
        }
        cout <<endl;
    }

}