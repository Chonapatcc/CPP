#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    a=60-a;
    cout << "07:";
    if(a>9)
    {
        cout << a;
    }
    else
    {
        cout << "0" <<a;
    }
}