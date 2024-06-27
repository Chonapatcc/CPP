#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin>>n;
    setlocale(LC_NUMERIC, "");

    printf("Product price before tax :  %'.2f  Baht\n",n);
    double tax= n*7/100;
    
    printf("tax :  %.2f  Baht\n",tax);
    printf("total price :  %'.2f  Baht",n+tax);
}