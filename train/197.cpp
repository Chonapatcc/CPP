#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    double a1,n1=a;
    int a2,n2=a;
    a1=sqrt(n1);
    a2=sqrt(n2);
    if(a1==a2)
    {
        cout << a2;
    }
    else
    {
        cout << "No Numbers Matching!";
    }

}