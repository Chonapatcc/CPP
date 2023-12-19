#include <bits/stdc++.h>
using namespace std;
void dog(int &x)
{
    x+=100;
}
int main()
{   
    int x=10;
    dog(x);
    cout << x;
}