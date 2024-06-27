#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int fac=1;
    for(int i=2;i<=n;i++)
    {
        fac*=i;
    }
    cout << fac << endl;
}