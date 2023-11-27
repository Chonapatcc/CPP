#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,sum=0,mul=1;
    cin >> a;

    for(int i =1 ; i <=a;i++)
    {
        mul=1;
        for(int y =0 ;y<i ; y ++)
        {
            mul*=i;
        }
        sum+=mul;

    }
    cout << sum;
}