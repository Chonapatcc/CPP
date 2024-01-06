#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    char b;
    cin>>a>>b;

    for(int i=1 ; i<=a; i++)
    {   
        for(int y=0 ;y<a-i;y++)
        {
            cout << " ";
        }
        for(int y=0 ;y<i;y++)
        {
            cout << b<<" ";
        }
        cout << endl;
    }   
}