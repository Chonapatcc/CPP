#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,sign;
    char temp;
    cin >> a >> sign >> b;
    swap(a[0],a[1]);
    swap(b[0],b[1]);

    int n1,n2;
    n1=stoi(a);
    n2=stoi(b);
    cout << n1 << " + " << n2 << " = " << n1+n2;
}