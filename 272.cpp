#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int sum=0 ,inc=0;

    for(int i =0 ; i<=a; i++)
    {
        sum+=500+inc;
        inc+=10;
    }
    cout << sum;
}