#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    cout << a;
    for(int i =a.length()-2 ;i>=0;i--)
    {
        cout << a[i];
    }
}