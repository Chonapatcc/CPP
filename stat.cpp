#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int dif=floor(a/3);
    cout << dif*40 <<endl;
    int change=b-dif*40;
    if( change<0)
    {
        cout << "Not enough money";
    }
    else
    {
        cout << change ;
    }
    
}