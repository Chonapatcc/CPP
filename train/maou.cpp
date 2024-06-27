#include <bits/stdc++.h>
using namespace std;

int main()
{
    double d,hand,pee,sizep;
    cin >> d >> hand >> pee >> sizep;
    double dif =(d-hand)/sizep;
    if(pee>dif)
    {
        cout << dif;
    }
    else
    {
        cout << pee;
    }
}