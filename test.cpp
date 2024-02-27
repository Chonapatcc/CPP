#include <bits/stdc++.h>
using namespace std;

int &cat(int n)
{
    int *p;
    *p = 10;
    
    return *p;
}



int main()
{
    int x = 50;
    x= cat(x);

    cout << x ;
}