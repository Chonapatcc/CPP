#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int x=a;
    for(int i=0 ; i< b ; i++)
    {
        x*=2;
    }
    cout <<x;
}