#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >>a;
    int sum=0;
    for(int i =2; i<=a;i+=2)
    {
        sum+=i*i; 

    }
    cout << sum;
}