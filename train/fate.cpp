#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , sum=0;
    cin >> a;
    int mult=1;
    for(int i =1 ; i <=a ; i++)
    {
        mult=1;
        for(int y = 0; y < 5; y++)
        {
            mult*=i;
        }
        sum+=mult;

    }
    cout << sum;
}