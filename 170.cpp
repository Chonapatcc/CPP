#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double p;
    char let;
    cin >> n >> p >> let;
    int percent;

    double price=p*n;
    if(price<=500)
    {
        percent=5;
    }
    else if(price>=1000)
    {
        percent =15;
    }
    else
    {
        percent =10;
    }

    if(let=='x')
    {
        percent+=5;
    }
    cout << "Total " <<fixed << setprecision(2) << price << endl;
    cout << "Discount "<<fixed << setprecision(2) << price*percent/100 << endl;
    cout << "Amount " << fixed <<setprecision(2) <<price-(price*percent/100) << endl;

}