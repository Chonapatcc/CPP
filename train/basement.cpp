#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a>> b;
    int c=0;
    string x;
    for(int i =a;i<=b;i++)
    {
        x=to_string(i);
        for(int y =0;y<x.length();y++)
        {
            if(x[y]=='9')
            {
                c++;
            }
        }
        
    }
    cout << c << endl;
}